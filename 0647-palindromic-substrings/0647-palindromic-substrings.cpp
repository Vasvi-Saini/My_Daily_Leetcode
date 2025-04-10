class Solution {
public:

    int countPalindromes(string s , int i , int j){
        int count = 0;

        while(i >= 0 && j < s.size()){
            if(s[i--] == s[j++]) count++;
            else break;
        }
        return count;
    }
    
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i<s.size(); i++){
                count += countPalindromes(s , i , i);
                count += countPalindromes(s, i, i+1);
        }
        return count;
    }
};