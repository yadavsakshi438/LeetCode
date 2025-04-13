class Solution {
public:
    long long mod=1e9+7;
    long long power(long long a,long long b){
        long long res=1;
        while(b){
            if(b%2)res=(res*a)%mod;
            a=(a*a)%mod;
            b/=2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long evenPos=(n+1)/2;
        long long oddPos=n/2;
        return power(5,evenPos)*power(4,oddPos)%mod;
    }
};