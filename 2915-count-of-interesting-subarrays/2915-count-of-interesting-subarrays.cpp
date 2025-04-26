class Solution {
public:
    long long countInterestingSubarrays(std::vector<int>& nums, int modulo, int k) {
        long long count = 0;
        int currentcount = 0;
        unordered_map<int, int> mp;
        mp[0] = 1; 
        for (int x : nums) {
            if (x % modulo == k) {
                currentcount++;
            }
            int modCount = currentcount % modulo; 
            int targetCount = (modCount - k + modulo) % modulo;
            count += mp[targetCount];
            mp[modCount]++;
        }
        
        return count;
    }
};