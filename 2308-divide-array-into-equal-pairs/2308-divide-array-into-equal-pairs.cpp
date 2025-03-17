class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second == 2){
                count++;
            } else if(i.second>2){
                if(i.second%2==0)
                   count += i.second/2;
            }
        }
        if(count == (nums.size()/2)){
            return true;
        }
        return false;
    }
};