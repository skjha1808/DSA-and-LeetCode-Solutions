class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it:nums){
            mp[it]++;
        }

        vector<int> ans;
        for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};