class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])==st.end()){
                cnt++;
                st.insert(s[i]);
            }
        }
        return cnt;
    }
};