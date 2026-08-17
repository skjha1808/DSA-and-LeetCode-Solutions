class Solution {
    long long solve(vector<int>& arr, int hourly) {
        long long totalhrs = 0;
        for (int i = 0; i < arr.size(); i++) {
            totalhrs += (arr[i] + hourly - 1) / hourly;
        }
        return totalhrs;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalhrs = solve(piles, mid);

            if (totalhrs <= h) {
                high = mid - 1;
            } 
            else
                low = mid + 1;
        }
        return low;
    }
};