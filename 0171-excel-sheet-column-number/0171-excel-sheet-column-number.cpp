class Solution {
public:
    int titleToNumber(string colTitle) {
        int number=0;
        for(char ch:colTitle){
            int value=ch-'A'+1;
            number=number*26+value;
        }
        return number;
    }
};