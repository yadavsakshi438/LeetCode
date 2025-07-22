class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int sum=0,maxsum=-1;
        unordered_map<int,int>mp;
        while(j<n){
            mp[nums[j]]++;
            while(mp[nums[j]]>1){
                sum-=nums[i];
                mp[nums[i]]--;
                i++;
            }
            sum+=nums[j];
            maxsum=max(maxsum,sum);
            j++; 
        }
        return maxsum;        
    }
};