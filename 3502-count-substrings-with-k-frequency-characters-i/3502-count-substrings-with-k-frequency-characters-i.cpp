class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<char , int> mp;
        int i = 0 , j = 0, count = 0;
        int n = s.size();
       while(j<n){
        mp[s[j]]++;
           while(mp[s[j]] >= k){
             count += n-j;
                mp[s[i]]--;
                i++;
             }
        j++;
       }
       return count;
    }
};