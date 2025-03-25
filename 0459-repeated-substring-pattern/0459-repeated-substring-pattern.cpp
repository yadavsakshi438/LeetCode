class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s; 
        return str.find(s,1)!=string::npos && str.find(s,1)!=s.size();
    }
};