class Solution {
public:
    string defangIPaddr(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                result += "[.]";
            }
            else result += s[i];
        }
        return result;
    }
};