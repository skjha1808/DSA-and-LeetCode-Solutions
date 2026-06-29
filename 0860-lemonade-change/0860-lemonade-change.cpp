class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt5=0;
        int cnt10=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)
                cnt5 += 1;
            else if(bills[i]==10){
                if(cnt5){
                    cnt5 -= 1;
                    cnt10 += 1;
                }
                else return false;
            }
            else {
                if(cnt10 && cnt5){
                    cnt10 -= 1;
                    cnt5 -= 1;
                }
                else if(cnt5 >= 3){
                    cnt5 -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};