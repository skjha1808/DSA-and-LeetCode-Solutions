class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0, currMax = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                currMax++;
                maxi = max(maxi, currMax);
            } 
            else if (s[i] == ')') {
                currMax--;
            }
        }
        return maxi;
    }
};