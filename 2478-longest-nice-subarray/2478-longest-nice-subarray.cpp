class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int usedBits=0,start=0,end=0;
        int maxLen=0;
        for(int end=0;end<nums.size();end++){
            while((usedBits&nums[end])!=0){
                usedBits=usedBits^nums[start];
                start++;
            }
            usedBits|=nums[end];
            maxLen=max(maxLen,end-start+1);
        }
        return maxLen;
    }
};