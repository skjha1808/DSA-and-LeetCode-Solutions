class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();

        for (int i = 0; i < s.size(); i++) {
            string rotated = s.substr(i) + s.substr(0, i);
            if (rotated == goal) {
                return true;
            }
        }
        return false;
    }
};