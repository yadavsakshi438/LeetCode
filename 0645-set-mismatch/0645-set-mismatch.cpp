class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        for (auto i:nums) {
            m[i]++;
            if(m[i]>1)
                v.push_back(i);
        }
        for(int i=1;i<=nums.size();i++){
            if (m.find(i)==m.end())
                v.push_back(i);
        }
        return v;
    }
};