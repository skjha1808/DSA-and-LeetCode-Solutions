class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for (int i = 1; i <= s.size(); i++) {
            int product = i * ('z' - s[i-1] + 1);
            ans += product;
        }
        return ans;
    }
};