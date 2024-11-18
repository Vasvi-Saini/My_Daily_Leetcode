class Solution {
public:
    bool isPalindrome(string s) {
        int len_of_s = s.length();
        int last_idx = len_of_s - 1;
        int first_idx = 0;

        while (first_idx <= last_idx) {
            char first = changeToLower(s[first_idx]);
            char last = changeToLower(s[last_idx]);

            if (!isAlphaNum(first)) {
                first_idx++;
            }
            else if (!isAlphaNum(last)) {
                last_idx--;
            }
            else if (first != last) {
                return false;
            }
            else {
                first_idx++;
                last_idx--;
            }
        }
        return true;
    }

    bool isAlphaNum(char c) {
        return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }

    char changeToLower(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c - int('A') + int('a');
        }
        return c;
    }
};