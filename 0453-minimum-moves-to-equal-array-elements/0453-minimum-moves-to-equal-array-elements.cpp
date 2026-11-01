class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_val = *min_element(nums.begin(), nums.end());
        
        long long sum = std::accumulate(nums.begin(), nums.end(), 0LL);
        
        return sum - (long long)min_val * nums.size();
    }
};