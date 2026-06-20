class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long maxi= LONG_MIN;
        long sMaxi= LONG_MIN;
        long tMaxi= LONG_MIN;

        for(int i=0;i<n;i++){
            if(nums[i]==maxi || nums[i]==sMaxi || nums[i]==tMaxi)
                continue;
            if(nums[i]>maxi){
                tMaxi=sMaxi;
                sMaxi=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>sMaxi){
                tMaxi=sMaxi;
                sMaxi=nums[i];
            }
            else if(nums[i]>tMaxi){
                tMaxi=nums[i];
            }
        }
        if(tMaxi==LONG_MIN)
            return maxi;
        else return tMaxi;
    }
};