class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;

        if (n < 1000) {
            return 0;
        }

        if (n < 1000000) {
            count += n - 999;
        } 
        else if (n < 1000000000) {
            count += 999000;
            count += (n - 999999) * 2;
        } 
        else if (n < 1000000000000LL) {
            count += 999000;
            count += 999000000LL * 2;
            count += (n - 999999999) * 3;
        } 
        else if (n < 1000000000000000LL) {
            count += 999000;
            count += 999000000LL * 2;
            count += 999000000000LL * 3;
            count += (n - 999999999999LL) * 4;
        } 
        else {
            count += 999000;
            count += 999000000LL * 2;
            count += 999000000000LL * 3;
            count += 999000000000000LL * 4;
            count += (n - 999999999999999LL) * 5;
        }

        return count;
    }
};