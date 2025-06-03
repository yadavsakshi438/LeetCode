class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long totalWays = 0;
        for (int first = 0; first <= std::min(n, limit); first++) {
            int remaining = n - first;
            if (remaining > 2 * limit) continue;
            if (remaining > limit) {
                int minSecond = remaining - limit;
                int maxSecond = limit;
                totalWays += (maxSecond - minSecond + 1);
            } else {
                totalWays += (remaining + 1);
            }
        }
        return totalWays;
    }
};
