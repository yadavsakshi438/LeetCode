class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if (heightMap.empty() || heightMap[0].empty()) return 0;
        int rows = heightMap.size();
        int cols = heightMap[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                    minHeap.push({heightMap[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }
        int waterTrapped = 0;
        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!minHeap.empty()) {
            auto [height, pos] = minHeap.top();
            minHeap.pop();
            int x = pos.first;
            int y = pos.second;
            for (auto& dir : directions) {
                int newX = x + dir[0];
                int newY = y + dir[1];
                if (newX >= 0 && newX < rows && newY >= 0 && newY < cols && !visited[newX][newY]) {
                    if (heightMap[newX][newY] < height) {
                        waterTrapped += height - heightMap[newX][newY];
                    }
                    minHeap.push({max(height, heightMap[newX][newY]), {newX, newY}});
                    visited[newX][newY] = true;
                }
            }
        }
        return waterTrapped;
    }
};