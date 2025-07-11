class Solution {
public:
    int countWays(vector<int>& nums) {
        int n = nums.size(); 
        int ans = 0; 
        sort(nums.begin(), nums.end());
        if(nums[0]>0) ans++;
        for(int i=0; i<n; i++){
            int c = i+1; 
            if(i+1 < n){
                if(c > nums[i] && c < nums[i+1]) ans++; 
            }
            else{
                if(c > nums[i]) ans++; 
            }
        }
        return ans;
    }
};