class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0, sum=0;
        int i=0;
        for(int j=0;j<n;j++){
            sum += arr[j];
            int size = j-i+1;
            if(size == k) {
                int avg = sum/k;
                if(avg >= threshold){
                    count++;
                }
                sum -= arr[i];
                i++;
            }
        }
        return count;
    }
};