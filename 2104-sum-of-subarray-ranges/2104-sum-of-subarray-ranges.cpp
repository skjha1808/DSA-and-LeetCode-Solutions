class Solution {
    // helper function for sumOfMax
    vector<int> nextGreater(vector<int> &nums){
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i])
                st.pop();
            ans[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return ans;
    }
    // helper function for sumOfMax
    vector<int> prevGreater(vector<int> &nums){
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<nums[i])
                st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    long long sumOfMax(vector<int> &nums) {
        vector<int> next=nextGreater(nums);
        vector<int> prev=prevGreater(nums);

        long long total=0;
        for(int i=0;i<nums.size();i++){
            long long left=i-prev[i];
            long long right=next[i]-i;
            total += nums[i] * left * right * 1LL;
        }
        return total;
    }

    // helper function for sumOfMins
    vector<int> prevSmaller(vector<int> &nums){
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i])
                st.pop();
            ans[i]=st.empty() ? -1:st.top();
            st.push(i);
        }
        return ans;
    }
    // helper function for sumOfMins
    vector<int> nextSmaller(vector<int> &nums){
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i])
                st.pop();
            ans[i]=st.empty() ? n:st.top();
            st.push(i);
        }
        return ans;
    }
    long long sumOfMins(vector<int>& nums) {
        vector<int> prev = prevSmaller(nums);
        vector<int> next = nextSmaller(nums);

        long long total=0;
        for(int i=0;i<nums.size();i++){
            long long left = i-prev[i];
            long long right = next[i]-i;
            total += left * right * nums[i] * 1LL;
        }
        return total;
    }

public:
    long long subArrayRanges(vector<int>& nums) {
        return sumOfMax(nums) - sumOfMins(nums);
    }
};