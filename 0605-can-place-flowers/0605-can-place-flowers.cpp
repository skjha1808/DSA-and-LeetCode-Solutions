class Solution {
public:
    bool canPlaceFlowers(vector<int>& fBed, int n) {
        int m = fBed.size();

        if (m == 1) {
            if (fBed[0] == 0)
                n--;

            return n <= 0;
        }

        for (int i = 0; i < m && n > 0; i++) {

            if (fBed[i] == 1)
                continue;

            // First position
            if (i == 0 && fBed[i + 1] == 0) {
                fBed[i] = 1;
                n--;
            }

            // Last position
            else if (i == m - 1 && fBed[i - 1] == 0) {
                fBed[i] = 1;
                n--;
            }

            // Middle position
            else if (i > 0 && i < m - 1 && fBed[i - 1] == 0 &&
                     fBed[i + 1] == 0) {
                fBed[i] = 1;
                n--;
            }
        }

        return n <= 0;
    }
};