class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n=s.size();
        int maxi=0;
       
        for(int i=0;i<n;i++){
            int cnt=1;
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==' ') 
                    cnt++;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};