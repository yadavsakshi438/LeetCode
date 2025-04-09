class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>l;
        subb(0,nums,l,ans);
        return ans;
    }
    void subb(int i, vector<int>& nums, vector<int>& l, vector<vector<int>>& ans){
        if(i == nums.size()){
            if(find(ans.begin(), ans.end(),l)==ans.end()){
                ans.push_back(l);
            }
            return;
        }
        subb(i+1,nums,l,ans);
        l.push_back(nums[i]);
        subb(i+1,nums,l,ans);
        l.pop_back();
    }
};