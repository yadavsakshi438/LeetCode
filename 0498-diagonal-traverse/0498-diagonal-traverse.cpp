class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) { 
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> diags(m+n-1);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                diags[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(int k=0; k<(m+n-1); k++){
            if(k%2 == 0){
                reverse(diags[k].begin(), diags[k].end());
            }
            for(auto num : diags[k]){
                ans.push_back(num);
            }
        }
        return ans;
    }
};