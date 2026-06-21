class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long fMaxi=LONG_MIN;
        long sMaxi=LONG_MIN;
        long tMaxi=LONG_MIN;

        long fMini=LONG_MAX;
        long sMini=LONG_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>fMaxi){
                tMaxi=sMaxi;
                sMaxi=fMaxi;
                fMaxi=nums[i];
            }
            else if(nums[i]>sMaxi){
                tMaxi=sMaxi;
                sMaxi=nums[i];
            }
            else if(nums[i]>tMaxi) {
                tMaxi=nums[i];
            }
            
            if(nums[i] < fMini){
                sMini = fMini;
                fMini = nums[i];
            }
            else if(nums[i] < sMini){
                sMini = nums[i];
            }
        }

        long product = max((fMaxi*sMaxi*tMaxi),(fMini*sMini*fMaxi));
        return product;
    }
};