class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int minpush = 0;
        for (int cnt = 0; cnt < n; cnt++) {
            minpush += cnt / 8 + 1;
        }
        return minpush;
    }
};