class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(auto it:nums1){
            mp[it]++;
        }

        vector<int> ans;
        for(auto x:nums2){
            if(mp[x] > 0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        return ans;
    }
};