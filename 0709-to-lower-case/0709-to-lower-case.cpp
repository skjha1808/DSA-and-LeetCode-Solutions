class Solution {
public:
    string toLowerCase(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            result += tolower(s[i]);
        }
        return result;
    }
};