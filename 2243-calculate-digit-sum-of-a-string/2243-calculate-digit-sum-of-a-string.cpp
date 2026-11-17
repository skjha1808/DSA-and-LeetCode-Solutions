class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string next_s = "";

            for (int i = 0; i < s.length(); i += k) {
                int current_sum = 0;

                for (int j = i; j < i + k && j < s.length(); ++j) {
                    current_sum += s[j] - '0';
                }
                next_s += to_string(current_sum);
            }
            s = next_s;
        }

        return s;
    }
};