class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void backtrack(int start, int k, int n) {
        if (k == 0 && n == 0) {
            res.push_back(path);
            return;
        }
        if (k < 0 || n < 0) return;
        for (int i = start; i <= 9; ++i) {
            path.push_back(i);
            backtrack(i + 1, k - 1, n - i); 
            path.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1, k, n); 
        return res;
    }
};
