class Solution {
    void solve(int n, int open, int close, string temp, vector<string> &ans){
        if(close==n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            solve(n,open+1,close,temp+'(',ans);
        }
        if(close<open){
            solve(n,open,close+1,temp+')',ans);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        solve(n,0,0,temp,ans);
        return ans;
    }
};