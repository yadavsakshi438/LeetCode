class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(), coins.end());
        int maxReach = 1;
        for (int coin : coins) {
            if (coin > maxReach)
                break;
            maxReach += coin;
        }
        return maxReach;
    }
};