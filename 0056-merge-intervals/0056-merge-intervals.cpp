class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>> arr;
        arr.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=arr.back()[1]){
                arr.back()[1]=max(arr.back()[1],intervals[i][1]);
            }
            else {
                arr.push_back(intervals[i]);
            }
        }
        
        return arr;
    }
};