class Solution {
public:
    int arrangeCoins(int n) {
        int ans = (sqrt(1 + 8.0 * n) - 1) / 2;
        return ans;
    }
};