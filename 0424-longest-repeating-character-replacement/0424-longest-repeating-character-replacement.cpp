class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<int,int> freq;
        int maxlen=0, maxcnt=0;
        int l=0, r=0;
        while(r <  n){
            freq[s[r]]++;
            maxcnt=max(maxcnt,freq[s[r]]);

            while((r-l+1)-maxcnt > k){
                freq[s[l]]--;
                l++;
            }

            if((r-l+1)-maxcnt <= k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};