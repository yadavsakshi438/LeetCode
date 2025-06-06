class Solution {
public:
    string robotWithString(string s) {
        int n=s.length();
        vector<char>minRight(n,s[n-1]);
        for(int j=n-2;j>=0;j--){
            minRight[j]=min(s[j],minRight[j+1]);
        }
        stack<char>t;
        string paper="";
        int i=0;
        while(i<n || !t.empty()){
            if(i<n){
                t.push(s[i]);
                i++;
            }
            while(!t.empty() && (i>= n || t.top()<=minRight[i])){
                paper+=t.top();
                t.pop();
            }
        }
        return paper;
    }
};