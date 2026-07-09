class Solution {
    int expand(string &s, int left, int right){
        while(left>=0 && right<s.length() && s[left]==s[right]) {
            left--;
            right++;
        }
        int length = right-left-1;
        return length;
    }
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxLen=0;
        for(int i=0;i<s.length();i++){
            int len1 = expand(s,i,i);
            int len2 = expand(s,i,i+1);
            int len = max(len1,len2);

            if(len > maxLen){
                maxLen = len;
                start = i - (len-1)/2;
            }
        }
        return s.substr(start, maxLen);
    }
};