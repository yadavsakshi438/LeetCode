class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int row = matrix.size(), col = matrix[0].size();
        int top = 0, right = col - 1, bottom = row - 1, left = 0;
        int num = 1;
        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++)
                matrix[top][j] = num++;
            top++;
            for (int i = top; i <= bottom; i++)
                matrix[i][right] = num++;
            right--;
            if(top<=bottom)
            for (int j = right; j >= left; j--)
                matrix[bottom][j] = num++;
            bottom--; 
            if(left<=right)
            for (int i = bottom; i >= top; i--)
                matrix[i][left] = num++;
            left++;
        }
        return matrix;
    }
};