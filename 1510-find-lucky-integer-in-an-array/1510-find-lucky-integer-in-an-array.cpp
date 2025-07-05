class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size(), res=-1;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;  }
        for(auto &[first,second] : mp){
            if(first == second)
              res = max(res, first);
        }
        return res;
    }
};