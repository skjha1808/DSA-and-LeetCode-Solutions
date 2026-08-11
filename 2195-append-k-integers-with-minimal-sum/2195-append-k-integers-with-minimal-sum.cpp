class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long ans = 0, prev = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (k == 0) break;

            int cnt = nums[i] - prev - 1;
            if(cnt < 0) continue;

            if (cnt <= k) {
                long long first = prev + 1;
                long long last = prev + cnt;

                ans += (first + last) * cnt / 2;
                k -= cnt;
            } 
            else {
                long long first = prev + 1;
                long long last = prev + k;

                ans += (first + last) * k / 2;
                k = 0;
            }

            prev = nums[i];
        }

        if (k > 0) {
            long long first = prev + 1;
            long long last = prev + k;

            ans += (first + last) * k / 2;
        }

        return ans;
    }
};