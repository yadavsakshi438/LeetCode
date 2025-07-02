class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void backtrack(int index, vector<int>& candidates, int target) {
        if (target == 0) {
            res.push_back(path);
            return;
        }
        for (int i = index; i < candidates.size(); ++i) {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;
            if (candidates[i] > target)
                break;
            path.push_back(candidates[i]);
            backtrack(i + 1, candidates, target - candidates[i]); 
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        backtrack(0, candidates, target);
        return res;
    }
};
