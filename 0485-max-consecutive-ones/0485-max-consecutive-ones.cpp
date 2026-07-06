class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        int maxlen=0;
        while(r<n){
            if(nums[r]!=1){
                l=r+1;
            }

            int len=r-l+1;
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};