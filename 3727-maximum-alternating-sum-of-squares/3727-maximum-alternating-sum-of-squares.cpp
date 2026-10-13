class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> arr;
        for(int x:nums){
            int num = abs(x);
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int n = arr.size();
        int i=0, j=n-1;
        long long evenSum = 0, oddSum=0;
        while(i <= j){
            if(i == j){
                evenSum += (arr[i]*arr[i]);
                break;
            }
            
            evenSum += (arr[i]*arr[i]);
            oddSum += (arr[j]*arr[j]);
            i++;
            j--;
        }
        
        return evenSum - oddSum;
    }
};