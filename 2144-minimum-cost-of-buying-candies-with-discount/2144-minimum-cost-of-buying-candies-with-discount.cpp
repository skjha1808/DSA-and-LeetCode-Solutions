class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        int minSum=0;
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(i%3==2) continue;
            else minSum += cost[i];
        }
        return minSum;
    }
};