class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> arr;
        for (int x : nums) {
            arr.push_back(abs(x));
        }
        sort(arr.begin(), arr.end(), greater<int>());

        int n = arr.size();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long sqr = 1LL * arr[i] * arr[i];

            if (i < (n + 1) / 2) {
                ans += sqr;
            } 
            else {
                ans -= sqr;
            }
        }
        return ans;
    }
};