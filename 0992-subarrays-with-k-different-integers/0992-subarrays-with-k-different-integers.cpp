class Solution {
    // helper function 
    int atMost(vector<int>& nums, int k){
        int n=nums.size();
        unordered_map<int,int> freq;
        int cnt=0;
        int l=0, r=0;
        while(r < n){
            freq[nums[r]]++;

            while(freq.size() > k){
                freq[nums[l]]--;

                if(freq[nums[l]]==0)
                    freq.erase(nums[l]);
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};