class Solution {
public:
    string convertToTitle(int colNum) {
        string s="";
        while(colNum>0){
            colNum--;
            int remainder=colNum%26;
            s += ('A'+remainder);
            colNum /=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};