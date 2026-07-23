class Solution {
public:
    int secondHighest(string s) {
        int maxi = -1;
        int sMaxi = -1;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i]) && s[i] - '0' > maxi) {
                sMaxi = maxi;
                maxi = s[i] - '0';
            }
            else if (isdigit(s[i]) && s[i] - '0' < maxi &&
                       s[i] - '0' > sMaxi) {
                sMaxi = s[i] - '0';
            }
        }
        return sMaxi;
    }
};