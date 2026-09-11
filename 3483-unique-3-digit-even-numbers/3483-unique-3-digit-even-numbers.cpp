class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int countFreq[10] = {0};
        for (auto it : digits) {
            countFreq[it]++;
        }

        int count = 0;
        for (int i = 100; i < 999; i += 2) {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;

            int temp[10] = {0};
            temp[a]++;
            temp[b]++;
            temp[c]++;

            if (temp[a] <= countFreq[a] && temp[b] <= countFreq[b] && temp[c] <= countFreq[c]) {
                count++;
            }
        }

        return count;
    }
};