class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      if(str1 + str2 != str2 + str1) return "";
      int str_len = gcd(str1.length(), str2.length());
        string ans = str1.substr(0,str_len);
       return ans;
    }
};