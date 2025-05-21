class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = INT_MIN;
        int i = 0;
        int j = n-1;
        while(j > i){
        ans = max(ans, (j-i) * min(height[i], height[j]));
        height[i] < height[j] ? i++  : j--;
        }   
        return ans;
    }
};