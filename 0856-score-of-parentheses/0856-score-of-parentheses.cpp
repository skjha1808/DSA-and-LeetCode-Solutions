class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(0);
            }
            else {
                int inside = st.top();
                st.pop();

                int score = (inside == 0) ? 1 : 2 * inside;
                st.top() += score;
            }
        }
        return st.top();
    }
};