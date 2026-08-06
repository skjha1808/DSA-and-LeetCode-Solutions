class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }

        vector<int> ans;
        // int i=0;
        // while(i < n){
        //     if(st.find(i+1) == st.end()){
        //         ans.push_back(i+1);
        //     }
        //     i++;
        // }

        for(int i=1;i<=n;i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};