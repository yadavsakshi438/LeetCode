class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        int i = num.size() - 1;
        
        while (k || i >= 0 || carry) {
            int digit = k % 10;

            if (i >= 0) {
                num[i] += digit + carry;
                carry = num[i] / 10;
                num[i] %= 10;
                i--;
            } else {
                int sum = digit + carry;
                carry = sum / 10;
                num.insert(num.begin(), sum % 10);
            }

            k /= 10;
        }
        return num;
    }
};