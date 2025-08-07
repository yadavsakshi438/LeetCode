class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        if (target > totalSum || target < -totalSum) {
            return 0;
        }
        int newTarget = (target + totalSum) / 2;
        if ((target + totalSum) % 2 != 0) {
            return 0;
        }
        vector<int> dp(newTarget + 1, 0);
        dp[0] = 1;
        for (int num : nums) {
            for (int j = newTarget; j >= num; --j) {
                dp[j] += dp[j - num];
            }
        }
        return dp[newTarget];
    }
};