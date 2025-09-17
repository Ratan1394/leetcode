class Solution {
public:
    bool isValid(string s) {
        std::vector<char> arr;
        if (s.size() <= 1) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                arr.push_back(s[i]);

            } else {
                if (arr.empty()) {
                    return false;
                }
            }

            if (s[i] == ')') {
                if (arr.back() == '(') {
                    arr.pop_back();

                } else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (arr.back() == '[') {
                    arr.pop_back();

                } else {
                    return false;
                }
            }
            if (s[i] == '}') {
                if (arr.back() == '{') {
                    arr.pop_back();

                } else {
                    return false;
                }
            }
        }
        return arr.empty();
    }
};