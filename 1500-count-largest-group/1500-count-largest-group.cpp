class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> groupCount;
        for (int i = 1; i <= n; i++) {
            int sum = 0, num = i;
            while (num > 0) {
                sum += num % 10; 
                num /= 10;      
            }
            groupCount[sum]++; 
        }
        int maxSize = 0, largestGroupCount = 0;
        for (const auto& entry : groupCount) {
            if (entry.second > maxSize) {
                maxSize = entry.second; 
                largestGroupCount = 1;  
            } else if (entry.second == maxSize) {
                largestGroupCount++; 
            }
        }
        return largestGroupCount;
    }
};