class Solution {
    vector<int> prevSmaller(vector<int> &arr){
        int n=arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> nextSmaller(vector<int> &arr){
        int n=arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            ans[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev=prevSmaller(heights);
        vector<int> next=nextSmaller(heights);
        int maxi=0;
        for(int i=0;i<heights.size();i++){
            int width=next[i]-prev[i]-1;
            maxi=max(maxi,heights[i]*width);
        }
        return maxi;
    }
};