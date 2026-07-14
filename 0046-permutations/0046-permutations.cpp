class Solution {
    void solve(int i, vector<int> &arr, vector<vector<int>> &ans){
        if(i==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int j=i;j<arr.size();j++){
            swap(arr[i], arr[j]);
            solve(i+1,arr,ans);
            swap(arr[i], arr[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        solve(0,nums,ans);
        return ans;
    }
};