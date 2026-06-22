class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            long long smallest=nums[i];
            long long largest=nums[i];
            for(int j=i+1;j<n;j++){
                largest=max(largest,(long long)nums[j]);
                smallest=min(smallest,(long long)nums[j]);
                sum += (largest-smallest);
            }
        }
        return sum;
    }
};