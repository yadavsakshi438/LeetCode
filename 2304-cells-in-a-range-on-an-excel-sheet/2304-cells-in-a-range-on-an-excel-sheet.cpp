class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        char col1 = s[0], col2 = s[3];
        char row1 = s[1], row2 = s[4];

        for (char c = col1; c <= col2; c++) {
            for (char r = row1; r <= row2; r++) {
                string cell = "";
                cell += c;
                cell += r;
                result.push_back(cell);
            }
        }
        return result;
    }
};
