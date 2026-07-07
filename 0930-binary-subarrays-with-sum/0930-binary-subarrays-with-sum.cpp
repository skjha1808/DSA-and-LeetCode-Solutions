class Solution {
    int atMost(vector<int>& nums, int k){
        if(k < 0) return 0;
        int n= nums.size();
        int sum=0, cnt=0;
        int l=0, r=0;
        while(r < n){
            sum += nums[r];
            while(sum > k){
                sum -= nums[l];
                l++;
            }

            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums,goal) - atMost(nums, goal-1);
    }
};