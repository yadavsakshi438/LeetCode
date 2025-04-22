class Solution {
public:
    vector<int> preSum;
    Solution(vector<int>& w) {
        int total_weight = 0;
        for (int num: w) {
            total_weight += num;
            preSum.push_back(total_weight);
        }
    }
    
    int pickIndex() {
        int rand_int = std::rand() % preSum[preSum.size() - 1];
        vector<int>::iterator ans =  upper_bound(preSum.begin(), preSum.end(),rand_int);
        return ans - preSum.begin();}
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */