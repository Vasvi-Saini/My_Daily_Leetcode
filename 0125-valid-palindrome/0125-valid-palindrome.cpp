class Solution {
public:
    bool isPalindrome(string s) {
        int s_length = s.length();
        int s_index = s.length() - 1;
         
         string result = " ";

         if(s_length <= 1) return true;
        
           int first = 0;
           int last = s_index;

           while(first <= last){
              while (first < last &&!isalnum(s[first])) first++;
              while(first < last && !isalnum(s[last])) last--;
              if (tolower(s[first]) != tolower(s[last])) {
                return false;
           }
           first++;
           last--;
        }
        
          return true;
        
    }
};