class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int minEven = INT_MAX, minOdd = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums1[i] % 2 == 0 && nums1[i] < minEven) {
                minEven = nums1[i];
            } 
            if (nums1[i] % 2 != 0 && nums1[i] < minOdd) {
                minOdd = nums1[i];
            }
        }

        if(minOdd == INT_MAX){
            return true;
        }

        if (minEven < minOdd) {
            return false;
        }

        return true;
    }
};