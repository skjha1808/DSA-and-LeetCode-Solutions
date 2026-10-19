class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<tuple<int, int, int>> arr;
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int sum = 0;
            while (num > 0) {
                sum += (num % 10);
                num /= 10;
            }
            arr.push_back({sum, nums[i], i});
        }

        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i] || get<2>(arr[i]) == i)
                continue;

            int j = i;
            int size = 0;
            while (!visited[j]) {
                visited[j] = true;
                j = get<2>(arr[j]);
                size++;
            }
            count += (size - 1);
        }

        return count;
    }
};