class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long long ans = 0;
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < s.size() && s[i] == '+') {
            sign = 1;
            i++;
        }

        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';
            ans = (ans * 10) + digit;

            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            } 
            if (sign == -1 && ans > -(long long)INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return ans * sign;
    }
};