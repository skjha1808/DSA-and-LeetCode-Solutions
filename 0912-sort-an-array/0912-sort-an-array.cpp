class Solution {
    void merge(vector<int> & arr, int low, int high){
        vector<int> temp;
        int i=low;
        int mid = low+(high-low)/2;
        int j=mid+1;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }
            else {
                temp.push_back(arr[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=high){
            temp.push_back(arr[j++]);
        }
        for(int i=low,j=0;i<=high;i++,j++){
            arr[i]=temp[j];
        }
    }

    void mergeSort(vector<int> & arr, int low, int high){
        if(low >= high) return;
        int mid = low+(high-low)/2;
        
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,high);
    }

    public:
    vector<int> sortArray(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};