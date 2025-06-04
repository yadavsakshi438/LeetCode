class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends == 1){
            return word;
        }
        string ans = "";
        int start = 0 ;
        int n = word.length();

        for(int i=0 ; i<n  ; i++){
            int front = i ;
            int back = n - 1 - (numFriends - 1 - front) ;
            string temp = word.substr(i , back - i + 1);
            if(temp > ans){
                ans = temp;
            }
        }

        return ans;
    }
};