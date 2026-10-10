class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push('(');
            } 
            else if (i + 1 < s.size() && s[i + 1] == ')') {
                if (!st.empty()) st.pop();
                else ans++;
                i++;
            } 
            else {
                ans++;
                if (!st.empty()) st.pop();
                else ans++;
            }
        }

        return ans + 2 * st.size();
    }
};