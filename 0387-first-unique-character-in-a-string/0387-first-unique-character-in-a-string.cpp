class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> memo;
        for (auto c : s) {
            if (memo[c]) {
                memo[c]++;
            } 
            else {
                memo[c] = 1;
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (memo[s[i]] == 1) {
                return i;
            }
        }
        return -1;
         
    }
};