class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>st(begin(nums), end(nums));
        int ans = 0, unique = st.size(), n = nums.size();
        for(int k = unique; k <= n; k++)
        {
            map<int, int>mp;
            int i = 0, j = 0;
            while(j < n)
            {
                mp[nums[j++]]++;
                if(j - i == k)
                {
                    if(mp.size() == unique) ans += 1;
                    mp[nums[i]]--;
                    if(mp[nums[i]] == 0)
                        mp.erase(mp.find(nums[i]));
                    i++;
                }
            }
        }
        return ans;
    }
};