class Solution {
public:
    bool isPerfectSquare(int num) {
        long left = 1;
    long right = num / 2;
    if(num==1){
        return true;
    }
    while (left <= right) {
       long mid=(left+right)/2;
        long square = mid * mid;

        if (square == num)
        {
            return true;
        }
         else if (square < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
    }
};