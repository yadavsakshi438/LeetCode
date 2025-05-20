class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> diff(n+2, 0);
        for(const auto &query: queries){
            diff[query[0]] += 1;
            diff[query[1]+1] -= 1;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            count += diff[i];
            if(nums[i] != 0) nums[i] -= count;
            if(nums[i] > 0) return false;
        }

        return true;
    }
};