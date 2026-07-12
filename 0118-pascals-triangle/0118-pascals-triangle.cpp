class Solution {
    vector<int> nthRow(int row){
        vector<int> res;
        res.push_back(1);

        long long ans=1;
        for(int i=1;i<row;i++){
            ans = ans * (row-i+1);
            ans = ans/i;
            res.push_back(ans);
        }
        if(row > 0){
            res.push_back(1);
        }
        return res;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++){
            res.push_back(nthRow(i));
        }
        return res;
    }
};