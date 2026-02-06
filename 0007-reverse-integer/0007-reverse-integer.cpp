class Solution {
public:
    int reverse(int x) {
        long long negative = x;
        // if (x < 0) {
        //     x = -x;
        // }
        int reverse = 0;
        for (int i = 1; x != 0; i++) {
            int last = x % 10;
            x = x / 10;
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && last > 7))
                return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && last < -8))
                return 0;
            reverse = reverse * 10 + last;
            // if (reverse < INT_MIN && reverse > INT_MAX) {
            //     return -1;
            // }
        }
        // if (reverse < INT_MIN && reverse > INT_MAX) {
        //     return -1;
        // }
        // if (negative < 0) {
        //     return -reverse;
        // } else {
            return reverse;
        // }
    }
};