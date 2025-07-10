class Solution {
public:
    int countDigits(int num) {
        int t=num,res=0;
        while(num>0)
        {
            if((t%(num%10)) == 0)
            {
                res++;
            }
            num=num/10;
        }
        return res;
    }
};