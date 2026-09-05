class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        string s="";
        int i=0, j=0;
        while(i<m && j<n){
            s.push_back(word1[i]);
            s.push_back(word2[j]);
            i++;
            j++;
        }

        while(i<m){
            s.push_back(word1[i]);
            i++;
        }
        while(j<n){
            s.push_back(word2[j]);
            j++;
        }

        return s;
    }
};