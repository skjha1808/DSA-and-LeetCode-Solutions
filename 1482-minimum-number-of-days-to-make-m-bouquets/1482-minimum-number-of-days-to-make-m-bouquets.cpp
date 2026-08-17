class Solution {
    bool solve(vector<int>& bloomDay,int day, int m, int k) {
        int n = bloomDay.size();
        int count = 0, bouquets = 0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= day) {
                count++;
            } else {
                bouquets += (count / k);
                count = 0;
            }
        }
        bouquets += (count / k);

        if (bouquets >= m) {
            return true;
        } else
            return false;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long result = 1LL * m * k;
        if (result > n)
            return -1;

        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int low = mini, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (solve(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else
                low = mid + 1;
        }

        return low;
    }
};