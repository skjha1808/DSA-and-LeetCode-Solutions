class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string word = words[i];

            if(mp1.find(ch) != mp1.end()){
                if(mp1[ch] != word)
                    return false;
            }
            else mp1[ch] = word;

            if(mp2.find(word) != mp2.end()){
                if(mp2[word] != ch)
                    return false;
            }
            else mp2[word] = ch;
        }
        return true;
    }
};