class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        for(char ch:sentence){
            st.insert(ch);
        }
        if(st.size()==26) return true;
        return false;
    }
};