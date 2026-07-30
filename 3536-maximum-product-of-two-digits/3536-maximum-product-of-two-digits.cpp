class Solution {
public:
    int maxProduct(int n) {
        int largest = INT_MIN, slargest = INT_MIN;
        while (n > 0) {
            int digit = n % 10;
            if (digit > largest) {
                slargest = largest;
                largest = digit;
            } else if (digit > slargest) {
                slargest = digit;
            }

            n = n / 10;
        }

        int maxi = largest * slargest;
        return maxi;
    }
};