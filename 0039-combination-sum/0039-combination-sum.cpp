class Solution {
public:
    vector<vector<int>>v;
    vector<int>v1;
    void check(int index,vector<int>&candidate, int target){
        if(target == 0){
            v.push_back(v1);
            return;
        }
        if (index >= candidate.size() || target < 0) return;
        v1.push_back(candidate[index]);
        check(index,candidate,target-candidate[index]);
        v1.pop_back();
        check(index+1,candidate,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        check(0,candidates,target);
        return v;
    }
};