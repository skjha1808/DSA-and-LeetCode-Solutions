class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0, product = 1;
        while (m > 0) {
            int digit = m % 10;
            sum += digit;
            product *= digit;
            m /= 10;
        }

        int totalSum = sum + product;
        if (n % totalSum == 0) {
            return true;
        } 
        else
            return false;
    }
};