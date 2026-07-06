class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> freq(26,0);
        int maxlen=0, maxcnt=0;
        int l=0, r=0;
        while(r <  n){
            freq[s[r]-'A']++;
            maxcnt=max(maxcnt,freq[s[r]-'A']);

            while((r-l+1)-maxcnt > k){
                freq[s[l]-'A']--;
                l++;
            }
            
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};