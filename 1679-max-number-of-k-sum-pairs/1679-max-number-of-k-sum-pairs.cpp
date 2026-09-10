class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int comp = k-nums[i];
            if(mp.find(comp)!=mp.end() && mp[comp]>0){
                count++;
                mp[comp]--;
            }
            else {
                mp[nums[i]]++;
            }
        }
        return count;
    }
};