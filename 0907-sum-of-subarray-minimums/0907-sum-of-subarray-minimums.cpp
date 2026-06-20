class Solution {
    vector<int> prevSmaller(vector<int> &nums){
        int n=nums.size();
        vector<int> ans1(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i])
                st.pop();
            ans1[i]=st.empty() ? -1:st.top();
            st.push(i);
        }
        return ans1;
    }
    vector<int> nextSmaller(vector<int> &nums){
        int n=nums.size();
        vector<int> ans2(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i])
                st.pop();
            ans2[i]=st.empty() ? n:st.top();
            st.push(i);
        }
        return ans2;
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> prev = prevSmaller(arr);
        vector<int> next = nextSmaller(arr);
        long long total=0;
        int mod=(int)(1e9+7);
        for(int i=0;i<arr.size();i++){
            int left = i-prev[i];
            int right = next[i]-i;
            total= (total+(left*right*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};