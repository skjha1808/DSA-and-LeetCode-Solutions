class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        // count freq
        for (auto x : s) {
            mp[x]++;
        }
        // traverse again to find first unique
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1)
                return i;
        }

        return -1;
    }
};