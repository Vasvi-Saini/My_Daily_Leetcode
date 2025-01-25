class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for (int Start = 0; Start <= n - m; Start++) {

            for (int i = 0; i < m; i++) {

                if (needle[i] != haystack[Start + i]) {
                    break;
                }

                if (i == m - 1) {
                    return Start;
                }
            }
        }

        return -1;
    }
};