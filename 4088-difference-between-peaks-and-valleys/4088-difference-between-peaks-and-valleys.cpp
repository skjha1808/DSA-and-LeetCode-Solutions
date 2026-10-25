class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peakValue = 0, valleyValue = 0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1] && nums[i] > nums[i-1]){
                peakValue += nums[i];
            }

            if(nums[i] < nums[i+1] && nums[i] < nums[i-1]){
                valleyValue += nums[i];
            }
        }

        return (peakValue - valleyValue);
        
    }
};