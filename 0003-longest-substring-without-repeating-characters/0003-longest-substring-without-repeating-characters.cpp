class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector<bool> count(256,false);
        int length = 0 , start = 0 , end = 0;
        while (end<s.size()){
           while(count[s[end]]){
            count[s[start]] = 0;
            start++;
           }
           count[s[end]] = 1;
           length = max(length , end-start + 1);
           end++;
        }
        return length;
    }
};