class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' ') count++;
            else if(count > 0) return count; // it means i encounter a space after the count is not zero thaat ultimately means the last word has ended
        }
        return count;
    }
};