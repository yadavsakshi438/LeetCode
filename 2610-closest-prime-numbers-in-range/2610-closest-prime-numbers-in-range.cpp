class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if (left >= right)
            return {-1, -1};
        int prev = -1, retPrev = -1, retCurr = -1;
        int diff = INT_MAX; 
        for (int num = left; num <= right; num++) {
            bool isPrime = true;
            if (num < 2) isPrime = false; 
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                if (prev != -1) {
                    if (num - prev < diff) {
                        retPrev = prev;
                        retCurr = num;
                        diff = num - prev;
                    }
                    if (diff == 2) {
                        return {retPrev, retCurr};
                    }
                }
                prev = num;
            }
        }
        return {retPrev, retCurr};
    }
};