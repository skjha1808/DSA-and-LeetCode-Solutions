class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        int depth = 0;
        for (char ch : seq) {
            if (ch == '(') depth++;

            ans.push_back(depth % 2);

            if (ch == ')') depth--;
        }
        return ans;
    }
};