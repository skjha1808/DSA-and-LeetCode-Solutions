class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto x:nums){
            st.insert(x);
        }

        int longest=0;
        for(int x:st){
            if(st.count(x-1)==0){
                int curr=x;
                int length=1;

                while(st.count(curr+1)){
                    curr++;
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};