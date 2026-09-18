class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        int currNum = 0;
        string currStr = "";
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                currNum = currNum * 10 + (s[i] - '0');
            } 
            else if (s[i] == '[') {
                num.push(currNum);
                str.push(currStr);

                currNum = 0;
                currStr = "";
            } 
            else if (isalpha(s[i])) {
                currStr += s[i];
            } 
            else if (s[i] == ']') {
                int repet = num.top();
                num.pop();

                string prev = str.top();
                str.pop();

                string temp = "";
                for(int j = 0; j < repet; j++) {
                    temp += currStr;
                }

                currStr = prev + temp;
            }
        }
        return currStr;
    }
};