class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s; //concatenation of string s with itself and stored in new str string
        return str.find(s,1)!=string::npos && str.find(s,1)!=s.size();  //this checks if substring s starting from index 1 can be found in str and ensures that the found position is not at the end of str
    }
};

/*
//Using Two Pointers
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                int j=0;
                while(j<n){
                    if(s.substr(j,i)!=s.substr(0,i)) break;
                    j+=i;
                }
                if(j==n) return true;
            }
        }
        return false;
    }
};*/

/*
//Using KMP Algorithm
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        vector<int>lps(n,0);
        int len=0;
        for(int i=1;i<n;i++){
            while(len>0 && s[i]!=s[len]){
                len=lps[len-1];
            }
            if(s[i]==s[len]){
                len++;
            }
            lps[i]=len;
        }
        return lps[n - 1]!=0 && lps[n-1]%(n-lps[n-1])==0;
    }
};*/