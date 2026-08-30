class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minimum = INT_MAX, minIndex=-1;
        int maximum = INT_MIN, maxIndex=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minimum){
                minimum=nums[i];
                minIndex=i;
            }

            if(nums[i]>maximum){
                maximum=nums[i];
                maxIndex=i;
            }
        }

        int i=min(minIndex, maxIndex);
        int j=max(minIndex, maxIndex);

        int answer = min(j+1, n-i);
        answer = min(answer, (i+1)+(n-j));

        return answer;
    }
};