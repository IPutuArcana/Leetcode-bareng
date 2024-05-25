class Solution {
public:
    int romanToInt(string s) {
        int *z = new int[s.length()];
        int r = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'I') {
                z[i] = 1;
            } else if(s[i] == 'V') {
                z[i] = 5;
            } else if(s[i] == 'X') {
                z[i] = 10;
            } else if(s[i] == 'L') {
                z[i] = 50;
            } else if(s[i] == 'C') {
                z[i] = 100;
            } else if(s[i] == 'D') {
                z[i] = 500;
            } else if(s[i] == 'M') {
                z[i] = 1000;
            }
        }

        for(int i = 0; i < s.length(); i++) {
            if(i < s.length() - 1 && z[i] < z[i + 1]) {
                r -= z[i];
            } else {
                r += z[i];
            }
        }
        return r;
    }
};
