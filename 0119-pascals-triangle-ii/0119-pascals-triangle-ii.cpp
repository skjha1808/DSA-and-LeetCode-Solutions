class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        long long ans=1;
        // first element
        res.push_back(1);

        // middle elements
        for(int i=1;i<rowIndex;i++){
            ans = ans * (rowIndex-i+1);
            ans = ans / i;
            res.push_back(ans);
        }
        
        // last element
        if(rowIndex>0){
            res.push_back(1);
        }
        return res;
    }
};