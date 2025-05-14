class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<long long> curr(26, 0), next(26, 0);
        int mod = 1e9 + 7;

        for (char ch : s)
            curr[ch - 'a']++;

        while (t--) {
            next[0] = curr[25]; 
            for (int i = 1; i < 26; ++i) {
                next[i] = curr[i - 1]; 
            }
            next[1] = (next[1] + curr[25]) % mod;  

            curr = next;
        }

        long long sum = 0;
        for (int val : curr) {
            sum = (sum + val) % mod;
        }

        return (int) sum;
    }
};