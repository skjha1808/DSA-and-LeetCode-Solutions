class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string currStr="";
        for(auto x:s){
            if(x=='('){
                st.push(currStr);
                currStr="";
            }
            else if(x==')'){
                reverse(currStr.begin(), currStr.end());
                string prev=st.top();
                st.pop();
                currStr = prev + currStr;
            }
            else {
                currStr += x;
            }
        }
        return currStr;
    }
};