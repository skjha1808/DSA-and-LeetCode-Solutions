class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(divisor==1) return dividend;

        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);

        long long sum = 0;
        long long quotient = 0;
        while(sum + d <= n){
            quotient++;
            sum += d;
        }

        if((dividend < 0) ^ (divisor < 0)){
            quotient = -quotient;
        }
        
        return quotient;
    }                                               
};