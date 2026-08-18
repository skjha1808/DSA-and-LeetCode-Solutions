class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int maxi = INT_MIN;
        int a=-1, b=-1;
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(mat[i][j]>maxi){
                    maxi=mat[i][j];
                    a=i; b=j;
                }
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};