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
            if(i<8){
                mincnt += freq[i];
            }
            else if(i>=8 && i<=15){
                mincnt += (freq[i] * 2);
            }
            else if(i>=16 && i<=23){
                mincnt += (freq[i] * 3);
            }
            else {
                mincnt += (freq[i] * 4);
            }
        }

        return mincnt;
    }
};