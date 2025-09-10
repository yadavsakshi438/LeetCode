class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;
        for (char c : columnTitle) {
            int val = c - 'A' + 1;
            result = result * 26 + val;
        }
        return result;
    }
};