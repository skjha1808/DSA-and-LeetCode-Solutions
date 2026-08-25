class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }

        int n = k, m=1;
        while(n <= 100){
            int num = m*k;
            if(st.find(num) == st.end()){
                return num;
            }
            m++;
            n = num;
        }

        return -1;
    }
};