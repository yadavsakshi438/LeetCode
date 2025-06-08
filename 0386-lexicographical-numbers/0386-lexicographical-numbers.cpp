class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>res;
        int current = 1;
        for (int i = 0; i < n; i++) {
            res.push_back(current);
            if (current * 10 <= n) {
                current *= 10;
            } else {
                while (current % 10 == 9 || current + 1 > n) {
                    current /= 10; 
                }
                current += 1;
            }
        }
        return res;
    }
};