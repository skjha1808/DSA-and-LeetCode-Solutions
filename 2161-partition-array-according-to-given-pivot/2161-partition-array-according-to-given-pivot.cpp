class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> ans;
        // int i=1;
        for(int j=0;j<n;j++){
            if(nums[j]<pivot){
                ans.push_back(nums[j]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                ans.push_back(nums[i]);
            }
        }
        for(int k=0;k<n;k++){
            if(nums[k]>pivot){
                ans.push_back(nums[k]);
            }
        }
        return ans;
    }
};