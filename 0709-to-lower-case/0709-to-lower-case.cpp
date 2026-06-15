class Solution {
public:
    string toLowerCase(string s) {
        string result="";
        for(int i=0;i<s.size();i++){
            if(s[i]==tolower(s[i])) 
                result += s[i];
            else 
                result += s[i]+32;
        }
        return result;
    }
};