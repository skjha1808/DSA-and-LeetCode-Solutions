class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int cnt=0, l=0;
        int a=0, b=0, c=0;
        for(int r=0;r<n;r++){
            if(s[r]=='a') a += 1;
            else if(s[r]=='b') b += 1;
            else c += 1;

            while(a>0 && b>0 && c>0){
                cnt = cnt+n-r;

                if(s[l]=='a') a--;
                else if(s[l]=='b') b--;
                else c--;
                l++;
            }
        }
        return cnt;
    }
};