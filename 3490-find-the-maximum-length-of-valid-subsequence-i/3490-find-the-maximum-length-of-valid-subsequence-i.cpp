class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        int prev = 0;
        int even = 0, odd = 0, alternate = 0;

        for(int i : nums){
            if(i % 2 ==0){
                even++;
            }else{
                odd++;
            }
            if(prev == 0 || (i % 2 != prev % 2)){
                alternate++;
            }
            prev = i;
        }
        return max({even , odd, alternate});
    }
};