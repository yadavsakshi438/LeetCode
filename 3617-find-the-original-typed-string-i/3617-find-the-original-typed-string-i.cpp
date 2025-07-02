class Solution {
public:
    int possibleStringCount(string word) {
        int ans = 1, index = 0, n = word.length();
        while (index < n) {
            while (index < n - 1 && word[index] == word[index + 1]) {
                ans++; 
                index++;  
            }
            index++;  
        }
        return ans;
    }
};