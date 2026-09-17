class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        string s = "";
        while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }

        while (s.size() > 0 && s.back() == '0') {
            s.pop_back();
        }
        if(s.empty()) return "0";

        reverse(s.begin(), s.end());
        return s;
    }
};