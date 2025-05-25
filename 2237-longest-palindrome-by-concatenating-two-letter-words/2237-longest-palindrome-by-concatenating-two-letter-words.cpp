class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> count; 
        for (string word : words) {
            count[word]++;
        }
        int result = 0;
        bool hasMiddle = false;
        for (auto& [word, freq] : count) {
            string reversed = string(word.rbegin(), word.rend());
            if (word == reversed) {
                result += (freq / 2) * 4;
                if (freq % 2 == 1) {
                    hasMiddle = true;
                }
            }
            else if (count.find(reversed) != count.end()) {
                int pairCount = min(freq, count[reversed]);
                result += pairCount * 4;
                count[reversed] = 0; 
                count[word] = 0;   
            }
        }
        if (hasMiddle) result += 2;
        return result;
    }
};
