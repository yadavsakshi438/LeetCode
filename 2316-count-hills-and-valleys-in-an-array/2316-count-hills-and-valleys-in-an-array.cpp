class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>arr;
        for(int x:nums){
            if(arr.empty() || arr.back()!=x) arr.push_back(x);
        }
        int ans=0;
        for(int i=1, N=arr.size()-1; i<N; i++){
            if((arr[i-1]<arr[i]) == (arr[i+1]<arr[i])) ans++;
        }
        return ans;
    }
};