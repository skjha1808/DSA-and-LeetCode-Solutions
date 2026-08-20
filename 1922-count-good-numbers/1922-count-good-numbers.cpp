class Solution {
    long long power(long long base, long long exp) {
        const long long MOD = 1e9 + 7;
        long long ans = 1;

        while (exp > 0) {
            if (exp % 2 == 1) {
                ans = (ans * base) % MOD;
            }

            base = (base * base) % MOD;
            exp /= 2;
        }

        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        const long long MOD = 1e9 + 7;
        long long even = power(5,(n+1)/2);
        long long odd = power(4,n/2);

        return (even * odd) % MOD;
    }
};