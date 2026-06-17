class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        for(int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        vector<int> arr;
        for(int j=0;j<nums2.size();j++){
            if(st.find(nums2[j]) != st.end()){
                arr.push_back(nums2[j]);
                st.erase(nums2[j]);
            }
        }
        return arr;
    }
};