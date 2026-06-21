class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else digits[i]=0;
        }
        // Insert 1 at the beginning (used when all digits were 9)
        digits.insert(digits.begin(),1);
        return digits;
    }
};