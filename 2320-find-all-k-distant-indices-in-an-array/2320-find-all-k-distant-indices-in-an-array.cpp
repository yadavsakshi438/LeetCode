class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keyIndices;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key) {
                keyIndices.push_back(i);
            }
        }
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            while (j < keyIndices.size() && keyIndices[j] < i - k) {
                j++;
            }
            if (j < keyIndices.size() && abs(keyIndices[j] - i) <= k) {
                result.push_back(i);
            }
        }
        return result;
    }
};
