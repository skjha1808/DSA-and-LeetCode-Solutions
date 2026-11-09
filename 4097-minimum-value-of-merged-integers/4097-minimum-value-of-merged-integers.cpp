class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size()-1;i=i+2){
            string s = to_string(nums[i]) + to_string(nums[i+1]);

            int num=stoi(s);
            mini = min(mini,num);
        }

        return mini;
    }
};