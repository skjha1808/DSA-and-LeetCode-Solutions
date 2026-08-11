class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        for(auto x:nums){
            st.insert(x);
        }

        int presum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                presum += nums[i];
            }
            else break;
        }

        for(auto x:st){
            if(st.find(presum)!=st.end()){
                presum++;
            }
            // else 
            //     return presum;
        }
        return presum;
    }
};