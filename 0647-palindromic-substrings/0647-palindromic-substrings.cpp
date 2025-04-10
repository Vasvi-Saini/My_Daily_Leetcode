class Solution {
public:

    int palindromes(string s, int left, int right){
         int count = 0;

        while(left>=0 && right<=s.size()-1){
          
            if(s[left] == s[right]){
                count++;
            }
            else break;
            left--;
            right++;
        }
        
        return count;
     
    }

    int countSubstrings(string s) {
        int count = 0;
        for(int i=0; i<s.size(); i++){
            count += palindromes(s, i, i);
            count += palindromes(s, i, i+1);
        }
        return count;
    }
};