class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans+=s[i];
        }
        for(int j=0;j<t.length();j++){
            ans-=t[j];
        }
        return char(abs(ans));
    }
};
