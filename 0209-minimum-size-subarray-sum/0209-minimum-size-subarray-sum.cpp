class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += nums[i];
        }
        if(ans < target) return 0;
        
        int mini=INT_MAX;
        int left=0, sum=0;

        for(int right=0;right<n;right++){
            sum += nums[right];

            while(sum >= target){
                mini = min(mini, right-left+1);
                sum -= nums[left];
                left++;
            }
        }
        return mini;
    }
};