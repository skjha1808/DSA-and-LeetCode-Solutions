class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string prefix="";
        string firstStr=strs[0];
        for(int i=0;i<firstStr.length();i++){
            for(int j=1;j<n;j++){
                if (i >= strs[j].length()){
                    return prefix;
                }
                if(firstStr[i] != strs[j][i]){
                    return prefix;
                }
            }
            prefix += firstStr[i];
        }
        return prefix;;
    }
};