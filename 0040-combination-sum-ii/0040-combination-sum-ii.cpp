class Solution {
public:
    void backtrack(int start, int target, int* candidates, int n, int* path, int pathLen, vector<vector<int>>& res) {
        if (target < 0) return;
        if (target == 0) {
            res.push_back(vector<int>(path, path + pathLen));
            return;
        }
        for (int i = start; i < n; i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            path[pathLen++] = candidates[i];
            backtrack(i + 1, target - candidates[i], candidates, n, path, pathLen, res);
            pathLen--;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> res;
        int path[1000];
        backtrack(0, target, &candidates[0], n, path, 0, res);
        return res;
    }
};