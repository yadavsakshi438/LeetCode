class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> result;
        set<int> uniqueNumbers;
        int n = digits.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    if (i != j && j != k && i != k) {
                        int a = digits[i];
                        int b = digits[j];
                        int c = digits[k];
                        if (a != 0 && c % 2 == 0) {
                            int num = a * 100 + b * 10 + c;
                            uniqueNumbers.insert(num);
                        }
                    }
                }
            }
        }
        for (int num : uniqueNumbers) {
            result.push_back(num);
        }
        return result;
    }
};