class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int maxCandies = n / 2;
        unordered_set<int> st(candyType.begin(), candyType.end());
        return min(maxCandies, (int)st.size());
    }
};