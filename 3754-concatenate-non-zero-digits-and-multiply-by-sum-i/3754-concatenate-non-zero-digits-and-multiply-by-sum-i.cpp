class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s="";
        int sum = 0;
        while(n>0){
            int digit=n%10;
            if(digit != 0){
                sum += digit;
                s += digit + '0';
            }
            n /= 10;
        }
        reverse(s.begin(), s.end());
        long long num = stoll(s);
        long long ans = sum * num;

        return ans;
    }
};