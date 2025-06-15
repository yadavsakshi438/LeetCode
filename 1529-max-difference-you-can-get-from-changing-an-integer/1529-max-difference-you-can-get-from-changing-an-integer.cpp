class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);
        string a = s, b = s;
        for (char &c : a){
            if (c != '9'){
                char x = c;
                for (char &i : a) if (i == x) i = '9';
                break;
            }
        }
        if (b[0] != '1'){
            char x = b[0];
            for (char &i : b) if (i == x) i = '1';
        }else{
            for (int i=1; i<b.size(); i++){
                if (b[i] != '0' && b[i] != '1'){
                    char x = b[i];
                    for (char &d : b) if (d == x) d = '0';
                    break;
                }
            }
        }
        return stoi(a) - stoi(b);
    }
};