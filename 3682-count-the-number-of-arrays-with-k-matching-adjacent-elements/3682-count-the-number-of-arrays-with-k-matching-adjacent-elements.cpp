const int mod = 1e9 + 7;
class Solution {
public:
    long long power(long long a, long long b) {
        long long result = 1;
        a %= mod;
        while (b > 0) {
            if (b % 2 == 1) result = (result * a) % mod;
            a = (a * a) % mod;
            b /= 2;
        }
        return result;
    }
    long long nCr(int n, int r, const vector<long long> &fact, const vector<long long> &invFact) {
        return (((fact[n] * invFact[r]) % mod) * invFact[n - r]) % mod;
    }
    int countGoodArrays(int n, int m, int k) {
        vector<long long> fact(n + 1, 1), invFact(n + 1, 1);
        for (int i = 1; i <= n; ++i)
            fact[i] = (fact[i - 1] * i) % mod;
        for (int i = 0; i <= n; ++i)
            invFact[i] = power(fact[i], mod - 2);
        long long waysToPlaceK = nCr(n - 1, k, fact, invFact);
        long long total = waysToPlaceK;
        total = (total * m) % mod;
        total = (total * power(m - 1, n - 1 - k)) % mod;
        return total;
    }
};
