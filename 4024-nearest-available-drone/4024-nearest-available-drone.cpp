class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();
        int mini = INT_MAX, idx = -1;
        int x = target[0], y = target[1];
        for (int i = 0; i < n; i++) {
            int droneX = drones[i][0];
            int droneY = drones[i][1];
            int range = drones[i][2];
            int distance = abs(droneX - x) + abs(droneY - y);

            if (distance <= range) {
                if(distance < mini){
                    mini = distance;
                    idx = i;
                }
            }
        }

        return idx;
    }
};