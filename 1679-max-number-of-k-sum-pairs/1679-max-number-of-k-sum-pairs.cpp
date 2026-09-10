class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int left=0, right=n-1;
        while(left<right){
            if(nums[left]+nums[right]==k){
                count++;
                left++;
                right--;
            }
            else if(nums[left]+nums[right]<k){
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};