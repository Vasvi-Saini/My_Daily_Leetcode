class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0 , maxi = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                i++;
                j++;
                maxi = max(maxi , j);
            }
            if(s[i]!=t[j]){
                i++; 
            }
        }
        return t.size()-maxi;
    }
};