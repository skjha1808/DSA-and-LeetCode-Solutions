class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int largest = INT_MIN;
        unordered_set<int> st;
        for (auto x : nums) {
            smallest = min(smallest, x);
            largest = max(largest, x);
            st.insert(x);
        }

        vector<int> ans;
        for (int i = smallest + 1; i < largest; i++) {
            if (!st.count(i)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};