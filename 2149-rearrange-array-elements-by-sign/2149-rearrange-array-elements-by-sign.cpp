class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0, neg = 1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                // ans.push_back(nums[pos]);
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else {
                // ans.push_back(nums[neg]);
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
    }
};