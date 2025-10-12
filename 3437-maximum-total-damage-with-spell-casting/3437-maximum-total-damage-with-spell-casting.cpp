class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        sort(power.begin(), power.end());
        int n = power.size();
        vector<long long> dp(n);

        int p = 0, cnt = 1;
        for (int i = 0; i < n; i++) {
            if(i && power[i] == power[i - 1]) cnt++;
            else cnt = 1;

            dp[i] = (long long) power[i] * cnt;

            while (p < n && power[p] < power[i]-2) p++;
            if(p > 0) dp[i] += dp[p-1];
            
            if(i) dp[i] = max(dp[i], dp[i-1]);
        }
        
        return dp.back();
    }
};