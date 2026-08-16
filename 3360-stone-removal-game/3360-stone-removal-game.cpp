class Solution {
public:
    bool canAliceWin(int n) {
        
        if((n>=10 && n<=18) || (n>=27 && n<=33) || (n>=40 && n<=44) ||
            (n>=49)) {
            return true;
        }
        if((n<10) || (n>=19 && n<=26) || (n>=34 && n<=39) || (n>=45 && n<=48)) {
            return false;
        }
        return -1;
    }
};