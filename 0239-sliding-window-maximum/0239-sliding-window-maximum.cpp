class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;
        int left=0, right=0;
        while(right<n){
            while(!dq.empty() && dq.front()<left){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[right]){
                dq.pop_back();
            }
            dq.push_back(right);
            if(right-left+1==k){
                ans.push_back(nums[dq.front()]);
                left++;
            }
            right++;
        }
        return ans;
    }
};