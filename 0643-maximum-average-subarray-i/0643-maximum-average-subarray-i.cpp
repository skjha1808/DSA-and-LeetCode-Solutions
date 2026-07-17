class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        long long maxi = LLONG_MIN;
        long long sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        maxi = sum;
        int left = 0, right = k-1;
        while(right < n-1){
            right++;

            sum += nums[right];
            sum -= nums[left];
            maxi = max(maxi,sum);
            left++;
        }
        double avg = (double)maxi/k;
        return avg;
    }
};