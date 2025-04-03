class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1) {
            if (seen.count(n)) {
                return false;
            }
            seen.insert(n);
            int sum = 0;
            while (n > 0) {
                int digit = n % 10; 
                sum += digit * digit; 
                n /= 10; 
            }
            n = sum; 
        }
        return true;
    }
};