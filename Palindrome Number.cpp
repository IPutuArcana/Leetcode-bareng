class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){ return false;}
        int z = 0, e = x;
        while (e > 0) {
            if (z > (INT_MAX - e % 10) / 10) {
                return false;
            }
            z = z * 10 + e % 10;
            e = e / 10;
        }
        return z == x;
    }
};
