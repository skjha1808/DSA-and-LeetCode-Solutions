class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7;
        long long ans = 0;
        int sum = 0, even = 1, odd = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if(sum % 2 !=0){
                ans = (ans + even) % MOD;
                odd++;
            }
            else {
                ans = (ans + odd) % MOD;
                even++;
            }
        }

        return ans;
    }
};