class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;
        int maxlen = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            int len = 0;
            if (nums[i] == 0) {
                sum += -1;

                if (mp.find(sum) == mp.end()) {
                    mp[sum] = i;
                } else {
                    len = i - mp[sum];
                }
            } 
            else {
                sum += 1;

                if (mp.find(sum) == mp.end()) {
                    mp[sum] = i;
                } else {
                    len = i - mp[sum];
                }
            }
            maxlen = max(maxlen, len);
        }
        return maxlen;
    }
};