class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int s = digits.size();
        int i = s-1;
        while(i>=0){
            if (digits[i]==9){
                digits[i] = 0;
                i--;
            }
            else{
                digits[i] = digits[i] + 1;
                return digits; 
            }  
        }
        std::vector<int> ans(s+1, 0);
        ans[0] = 1;
        return ans;
    }
};