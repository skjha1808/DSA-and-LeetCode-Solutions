class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            for(int k=0;k<j.size();k++){
                if(s[i]==j[k])
                cnt++;
            }
        }
        return cnt;
    }
};