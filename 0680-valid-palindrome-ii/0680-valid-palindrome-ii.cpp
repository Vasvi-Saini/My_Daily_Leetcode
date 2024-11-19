class Solution {
public:
   bool ispalndrm(string s, int left, int right){
    while (left <= right) 
        {
          if(s[left] != s[right]){    // cond1 is palindrome 
           return false;
          }
          left++;
          right--;
        }
        return true;
   }
         
    bool validPalindrome(string s) {
        int len_of_s = s.length();
        int last_idx = len_of_s - 1;
        int first_idx = 0;

        while (first_idx <= last_idx) 
        {
          if(s[first_idx] != s[last_idx]) return ispalndrm( s, first_idx+1, last_idx) || ispalndrm( s, first_idx, last_idx-1) ;
          first_idx++;
          last_idx--;
        }
        return true;

    }
};