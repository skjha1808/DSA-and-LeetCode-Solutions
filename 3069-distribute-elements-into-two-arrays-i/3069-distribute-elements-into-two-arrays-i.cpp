class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int a = nums[0], b = nums[1];
        vector<int> arr1;
        arr1.push_back(a);
        vector<int> arr2;
        arr2.push_back(b);
        for (int i = 2; i < nums.size(); i++) {
            if (a > b) {
                a = nums[i];
                arr1.push_back(a);
            } 
            else {
                b = nums[i];
                arr2.push_back(b);
            }
        }

        vector<int> ans;
        for (auto it : arr1) {
            ans.push_back(it);
        }
        for (auto it : arr2) {
            ans.push_back(it);
        }

        return ans;
    }
};