class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
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
        
        if(mini == INT_MAX) return 0;
        else return mini;
    }
};