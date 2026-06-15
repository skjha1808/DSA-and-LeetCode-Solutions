class Solution {
public:
    string toLowerCase(string s) {
        // string result="";
        
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
        return s;
    }
};