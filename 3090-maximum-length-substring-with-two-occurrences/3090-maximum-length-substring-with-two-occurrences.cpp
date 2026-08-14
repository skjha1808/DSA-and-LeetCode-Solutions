class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mp;
        int maxi=0, j=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;

            while(mp[s[i]] > 2){
                mp[s[j]]--;
                j++;
            }
            maxi = max(maxi, i-j+1);
        }
        return maxi;
    }
};