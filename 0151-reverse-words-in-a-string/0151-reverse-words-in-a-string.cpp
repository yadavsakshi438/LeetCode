class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word); 
        }
        reverse(words.begin(), words.end());
        string result;
        for (const auto& w : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += w; 
        }
        return result;
    }
};