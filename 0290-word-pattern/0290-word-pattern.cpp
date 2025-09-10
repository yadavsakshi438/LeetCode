class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string w;
        while (ss >> w) words.push_back(w); 

        if (words.size() != pattern.size()) return false;

        unordered_map<char, string> c2w;
        unordered_map<string, char> w2c;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string word = words[i];

            if ((c2w.count(c) && c2w[c] != word) || 
                (w2c.count(word) && w2c[word] != c))
                return false;

            c2w[c] = word;
            w2c[word] = c;
        }

        return true;
    }
};