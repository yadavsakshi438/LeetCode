class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        int maxDist = max(rCenter, rows-1-rCenter) + max(cCenter, cols-1-cCenter);
        vector<vector<vector<int>>> buckets(maxDist+1);
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                int d = abs(r - rCenter) + abs(c - cCenter);
                buckets[d].push_back({r, c});
            }
        }
        vector<vector<int>> result;
        for (auto &bucket : buckets) {
            for (auto &cell : bucket) result.push_back(cell);
        }
        return result;
    }
};
