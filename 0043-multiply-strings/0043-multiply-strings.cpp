class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        if(num1=="0" || num2=="0"){
            return "0";
        }
        vector<int>res(n+m,0);
        for(int i=n-1;i>=0;i--){
            int d1 = num1[i]-'0';
            for(int j=m-1;j>=0;j--){
                int d2 = num2[j]-'0';
                int sum = d1*d2+res[i+j+1];
                res[i+j+1] = sum%10;
                res[i+j] += sum/10;
            }
        }
        string ans = "";
        int i=0;
        while(i<n+m && res[i]==0) i++;
        if(i==n+m) return "0";
        while(i<n+m) ans += res[i++] + '0';
        return ans;
    }
};