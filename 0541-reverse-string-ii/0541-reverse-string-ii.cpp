class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
            int l = i;
            int h = min(i + k - 1, n - 1);
            while (l < h) {
                swap(s[l], s[h]);
                l++;
                h--;
            }
        }
        return s;
    }
};