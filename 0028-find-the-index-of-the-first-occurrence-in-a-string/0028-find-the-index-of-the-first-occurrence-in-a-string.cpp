class Solution {
public:
    int strStr(string hs, string needle) {
        int n=hs.size();
        int m=needle.size();
        for(int i=0;i<=n-m;i++){
            int j=0;
            while(j<m && hs[i+j]==needle[j]){
                j++;
            }
            if(j==m) return i;
        }
        return -1;
    }
};