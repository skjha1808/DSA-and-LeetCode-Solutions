class Solution {
public:
    int smallestNumber(int n, int t) {
        while (n <= 100) {
            int product = 1;
            int m = n;
            while (m > 0) {
                int digit = m % 10;
                product *= digit;
                m /= 10;
            }
            if(product % t == 0){
                return n;
            }
            else n++;
        }
        return -1;
    }
};