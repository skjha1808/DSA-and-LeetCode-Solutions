class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }

        vector<int> ans;
        int i=0;
        while(i < n){
            if(st.find(i+1) == st.end()){
                ans.push_back(i+1);
            }
            i++;
        }
        return ans;
    }
};