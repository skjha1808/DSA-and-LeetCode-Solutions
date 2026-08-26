class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        string ans="";
        int i=0, cnt =0;

        for(int j=0;j<n;j++){
            if(s[j]=='1'){
                cnt++;
            }

            if(cnt==k){
                while(s[i]=='0'){
                    i++;
                }
                string str = s.substr(i, j - i + 1);
                if(ans.empty() || str.size() < ans.size() ||
                   (str.size() == ans.size() && str < ans)) {
                    ans = str;
                }
                i++;
                cnt--;
            }
        }
        return ans;
    }
};