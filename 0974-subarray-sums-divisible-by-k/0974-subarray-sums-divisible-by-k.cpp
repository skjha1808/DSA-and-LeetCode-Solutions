class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        freq[0] = 1;

        int presum = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            presum += nums[i];
            int rem = presum % k;

            if(rem < 0){
                rem = (rem + k) % k;
            }

            if (freq.find(rem) != freq.end()) {
                cnt += freq[rem];
            }

            freq[rem]++;
        }
        return cnt;
    }
};