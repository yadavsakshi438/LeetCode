class Solution {
public:
    bool isValid(vector<int>& nums, int p, int threshold) {
        int cnt = 0;
        for (int i = 0; i < nums.size() - 1;) {
            if (abs(nums[i] - nums[i + 1]) <= threshold) {
                cnt++;
                i += 2;
            } else {
                i++;
            }
            if (cnt >= p)
                return true;
        }
        return false;
    }

    int minimizeMax(vector<int>& nums, int p) {
        if (p == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int l = 0, r = 1e9, res = 1e9;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (isValid(nums, p, m)) {
                res = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return res;
    }
};