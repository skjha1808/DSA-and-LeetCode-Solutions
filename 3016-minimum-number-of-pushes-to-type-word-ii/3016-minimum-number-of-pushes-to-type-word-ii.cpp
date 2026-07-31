class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for (char ch : word) {
            freq[ch - 'a']++;
        }
        sort(freq.begin(), freq.end(), greater<int>());

        int mincnt = 0;
        for (int i=0;i<26;i++) {
            mincnt += freq[i] * (i/8 + 1);
        }

        return mincnt;
    }
};