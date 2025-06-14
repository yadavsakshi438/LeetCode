class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        auto remap = [&](char from, char to) -> int {
            string t = s;
            for (char& c : t) {
                if (c == from) c = to;
            }
            return stoi(t);
        };
        int maxVal = num;
        int minVal = num;
        for (char d = '0'; d <= '9'; d++) {
            for (char r = '0'; r <= '9'; r++) {
                if (d == r) continue;
                int newVal = remap(d, r);
                maxVal = max(maxVal, newVal);
                minVal = min(minVal, newVal);
            }
        }
        return maxVal - minVal;
    }
};
