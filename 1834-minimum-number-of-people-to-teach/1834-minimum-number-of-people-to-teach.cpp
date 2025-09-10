class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
       int m = languages.size();
        vector<vector<bool>> knows(m+1, vector<bool>(n+1, false));
        for(int i=0; i<m; i++){
            for(int lang : languages[i]){
                knows[i+1][lang] = true; 
            }
        }
        unordered_set<int> needTeach;
        for(auto &f : friendships){
            int u = f[0], v = f[1];
            bool canTalk = false;
            for(int lang=1; lang<=n; lang++){
                if(knows[u][lang] && knows[v][lang]){
                    canTalk = true;
                    break;
                }
            }
            if(!canTalk){
                needTeach.insert(u);
                needTeach.insert(v);
            }
        }
        
        if(needTeach.empty()) return 0;
        int ans = INT_MAX;
        for(int lang=1; lang<=n; lang++){
            int cnt = 0;
            for(int user : needTeach){
                if(!knows[user][lang]) cnt++;
            }
            ans = min(ans, cnt);
        }
        return ans; 
    }
};