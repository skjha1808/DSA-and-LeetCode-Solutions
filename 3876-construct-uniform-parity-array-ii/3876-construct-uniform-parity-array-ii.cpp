class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int even = INT_MAX, odd = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0) {
                even = min(even, nums1[i]);
            } else {
                odd = min(odd, nums1[i]);
            }
        }

        if (odd == INT_MAX) {
            return true;
        }
        if (even < odd) {
            return false;
        }
        return true;
    }
};