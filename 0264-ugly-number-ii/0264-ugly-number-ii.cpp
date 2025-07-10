class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0){
            return 0;
        }
        vector<int>v(n);
        v[0]=1;
        int a=0, b=0, c=0;
        for(int i=1;i<n;i++){
            int num=min({v[a]*2,v[b]*3,v[c]*5});
            v[i]=num;
            if(num==v[a]*2){
                a++;
            }
            if(num==v[b]*3){
                b++;
            }
            if(num==v[c]*5){
                c++;
            }
        }
        return v[n-1];
    }
};