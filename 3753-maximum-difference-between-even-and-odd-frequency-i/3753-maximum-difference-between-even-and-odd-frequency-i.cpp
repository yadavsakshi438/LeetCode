class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        int maxOdd = -1, minEven = -1;
        for (auto& [ch, f] : freq) {
            if (f % 2 == 1) {  
                if (maxOdd == -1 || f > maxOdd)
                    maxOdd = f;
            } else {         
                if (minEven == -1 || f < minEven)
                    minEven = f;
            }
        }
        if (maxOdd == -1 || minEven == -1)
            return 0;
        return maxOdd - minEven;
    }
};