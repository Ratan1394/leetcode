class Solution {
public:
    // int sumOne(string s) {

    //     return sum1;
    // }
    int maxScore(string s) {
        int score = 0;
        int sum0 = 0;
        int sum1 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                sum1++;
            }
        }
        if (sum1 == 0) {
            return (s.size()) - 1;
        }

        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == '0') {
                sum0++;
            } else {
                sum1--;
            }
            if (score < sum0 + sum1) {
                score = sum0 + sum1;
            }
        }
        return score;
    }
};