class Solution {
public:
    int minRotations(string s) {
        int rotation = 0;
        int current = 0;
        for (int i = 0; i < s.size(); i++) {
            int target = s[i] - '0';
            int diff = abs(current - target);
            int mini = min(diff, 10 - diff);
            rotation += mini;
            current = target;
        }
        return rotation;
    }
};