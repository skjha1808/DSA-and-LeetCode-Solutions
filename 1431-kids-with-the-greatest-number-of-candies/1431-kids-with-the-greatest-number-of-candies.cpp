class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int n=candies.size();
        for(int i=0;i<n;i++){
            int maxi=candies[i]+extraCandies;
            bool flag=true;
            for(int j=0;j<n;j++){
                if(maxi<candies[j]){
                    flag = false;
                    break;
                }
            }
            result.push_back(flag);
        }
        return result;
    }
};