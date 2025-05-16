class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;
        if (words.empty()) return result;
        result.push_back(words[0]);
        int last_selected_index = 0;
        for (int i = 1; i < words.size(); ++i) {
            if (groups[i] != groups[last_selected_index]) {
                result.push_back(words[i]);
                last_selected_index = i;
            }
        }
        return result;
    }
};