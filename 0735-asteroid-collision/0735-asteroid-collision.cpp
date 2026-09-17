class Solution {
public:
    vector<int> asteroidCollision(vector<int>& astr) {
        stack<int> st;
        for (int i = 0; i < astr.size(); i++) {
            if (astr[i] > 0) {
                st.push(astr[i]);
            } 
            else {
                while (!st.empty() && st.top() > 0 && st.top() < abs(astr[i])) {
                    st.pop();
                }

                if (!st.empty() && st.top() == abs(astr[i])) {
                    st.pop();
                } 
                else if (st.empty() || st.top() < 0) {
                    st.push(astr[i]);
                }
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};