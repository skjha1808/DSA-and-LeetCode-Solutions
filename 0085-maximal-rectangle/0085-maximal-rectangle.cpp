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
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> height(matrix[0].size(),0);
        int maxArea=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1') height[j]++;
                else height[j]=0;
            }
            int area=largestRectangleArea(height);
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};