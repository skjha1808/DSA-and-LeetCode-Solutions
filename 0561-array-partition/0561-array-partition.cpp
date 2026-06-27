class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int maxSum=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i=i+2){
            maxSum += min(nums[i],nums[i-1]);
        }
        return maxSum;
    }
};