class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, set<int>> mp;
        for (auto& it : reservedSeats) {
            mp[it[0]].insert(it[1]);
        }

        int count = 2 * n;
        for (auto &row : mp) {
            auto &st = row.second;
            count -= 2;

            bool leftFree = true;
            for (int seat = 2; seat <= 5; seat++) {
                if (st.count(seat)) {
                    leftFree = false;
                    break;
                }
            }

            bool middleFree = true;
            for (int seat = 4; seat <= 7; seat++) {
                if (st.count(seat)) {
                    middleFree = false;
                    break;
                }
            }

            bool rightFree = true;
            for (int seat = 6; seat <= 9; seat++) {
                if (st.count(seat)) {
                    rightFree = false;
                    break;
                }
            }

            if (leftFree && rightFree) {
                count += 2;
            } 
            else if (leftFree || middleFree || rightFree) {
                count++;
            }
        }

        return count;
    }
};