class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j])
                    cnt++;
            }
            arr.push_back(cnt);
        }
        return arr;
    }
};