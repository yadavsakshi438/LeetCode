class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        unsigned max_OR = accumulate(nums.begin(), nums.end(), 0, bit_or<>());
        function<int(int, unsigned)> f = [&](int i, unsigned acc_or) -> int {
            if (i < 0) return (acc_or == max_OR) ? 1 : 0;
            int skip = f(i - 1, acc_or);
            int take = f(i - 1, acc_or | nums[i]);
            return skip + take;
        };
        return f(n - 1, 0);
    }
};
