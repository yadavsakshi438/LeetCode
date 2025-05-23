class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int left = 0, right = queries.size(), answer = -1;
        auto isValid = [&](int k) {
            vector<int> diff(n + 1, 0);
            for (int i = 0; i < k; ++i) {
                int l = queries[i][0], r = queries[i][1], val = queries[i][2];
                diff[l] += val;
                if (r + 1 < n) diff[r + 1] -= val;
            }
            int curr = 0;
            for (int i = 0; i < n; ++i) {
                curr += diff[i];
                if (nums[i] > curr) return false; 
            }
            return true;
        };
        while (left <= right) {
            int mid = (left + right) / 2;
            if (isValid(mid)) {
                answer = mid;
                right = mid - 1; 
            } else {
                left = mid + 1;  
            }
        }
        return answer;
    }
};
