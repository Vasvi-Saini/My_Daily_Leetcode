class Solution {
public:
    bool isPalindrome(string s) {
        int first = 0;
        int last = s.length() - 1;
      
        while(first <= last){

            while(
                first < last 
                && !(((s[first] >= 'a') && (s[first] <= 'z'))
                || ((s[first] >= 'A') &&  (s[first] <= 'Z'))
                || ((s[first] >='0') &&  (s[first] <= '9')))
            ) {
                first++;
            }

            while(
                first < last 
                && !(((s[last] >= 'a') && (s[last] <= 'z'))
                || ((s[last] >= 'A') && (s[last] <= 'Z')) 
                ||  ((s[last] >='0') &&  (s[last]  <= '9')))
                ) 
    {
        last--;
    }
         
     
    
        if(tolower(s[first]) != tolower(s[last])) return false;
        first++;
        last--;


      }
      return true;
    }
};