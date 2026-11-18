class Solution {
public:
    int alternateDigitSum(int n) {
        int pos = 1, copy = n, ans = 0;
        while (copy >= 10) {
            pos *= 10;
            copy /= 10;
        }
        copy = n;
        bool neg = false;
        while (copy > 0) {
            if (neg) {
                ans += (-1 * copy / pos);
                copy = copy%pos;
                neg = false;
            } else {
                ans += copy / pos;
                copy = copy%pos;
                neg = true;
            }
            pos /= 10;
        }
        return ans;
    }
};