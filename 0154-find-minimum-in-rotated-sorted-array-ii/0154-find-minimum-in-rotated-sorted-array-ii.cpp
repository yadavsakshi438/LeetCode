class Solution {
public:
    int findMin(vector<int>& nums) {
         int start=0, end=nums.size()-1,ans=nums[0],mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>nums[end])
               start= mid+1;
            else if(nums[mid]<nums[end]){
                ans=min(ans,nums[mid]);
                end=mid;
            }
            else{
                end--;
            }
        }
        return min(ans,nums[start]);
    }
};

