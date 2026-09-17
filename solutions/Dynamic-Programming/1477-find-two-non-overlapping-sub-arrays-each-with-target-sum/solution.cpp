class Solution {
public:
    int minSumOfLengths(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int sum = 0;
        int ans = INT_MAX;

        vector<int> dp(n, INT_MAX);

        for (int r = 0; r < n; r++) {
            sum += nums[r];

            while (sum > target) {
                sum -= nums[l];
                l++;
            }

            if (sum == target) {
                int len = r - l + 1;

                if (l > 0 && dp[l - 1] != INT_MAX) {
                    ans = min(ans, len + dp[l - 1]);
                }

                if (r == 0)
                    dp[r] = len;
                else
                    dp[r] = min(dp[r - 1], len);
            } else {
                if (r > 0)
                    dp[r] = dp[r - 1];
            }
        }

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};
