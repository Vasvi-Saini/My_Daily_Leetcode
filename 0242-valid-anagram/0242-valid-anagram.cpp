class Solution {
public:
    bool isAnagram(string s, string t) {
        // int v1 = 0;
        // int v2 = 0;
        // if (s.length() != t.length()) return false;
        // for (auto c : s) {
        //     v1 ^= 1 << ('z' - c);
        // }
        // for (auto c : t) {
        //     v2 ^= 1 << ('z' - c);
        // }
        // return v1 == v2;


        map<char, int> memo;
        for (auto c : s) {
            if (memo[c]) {
                memo[c]++;
            } else {
                memo[c] = 1;
            }
        }

        for (auto c : t) {
            if (memo[c]) {
                memo[c]--;
            } else {
                memo[c] = -1;
            }
        }
      for(auto &c : memo){
        if(c.second != 0)   return false;
   }
   return true;
    }
};