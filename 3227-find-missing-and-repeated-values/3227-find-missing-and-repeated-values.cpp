class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int mis = 0, rep = 0, n = grid.size();
        vector<int> vis(n * n + 1, 0);
        for(int i = 0; i < n; i++) {
            for(auto it : grid[i]) {
                vis[it]++;
            }
        }
        for(int i = 1; i < (n * n + 1); i++) {
            if(vis[i] == 2) rep = i;
            if(vis[i] == 0) mis = i;
        }
        return {rep, mis};
    }
};