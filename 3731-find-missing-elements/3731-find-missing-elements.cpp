class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int smallest = nums[0];
        int largest = nums[n-1];
        set<int> st;
        for(auto x:nums){
            st.insert(x);
        }
        while(smallest < largest){
            if(st.find(smallest+1) == st.end()){
                ans.push_back(smallest+1);
            }
            smallest += 1;
        }

        return ans;
    }
};