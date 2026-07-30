class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = nums[0], slargest = INT_MIN;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i] > slargest){
                slargest = nums[i];
            }
        }

        int maxvalue = (largest - 1) * (slargest - 1);
        return maxvalue;
    }
};