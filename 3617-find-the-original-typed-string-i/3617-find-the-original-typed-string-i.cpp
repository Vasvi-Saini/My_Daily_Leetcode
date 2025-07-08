class Solution {
public:
    int possibleStringCount(string word) {
         vector<int> freq(256 , 0);
        int ans = 0;
        for(int i = 0; i<word.size(); i++){
            if(freq[word[i]] == 0)
            freq[word[i]]++;
        }
        for(int i = 0; i<word.size()-1; i++){
            if(word[i] == word[i+1])
            freq[word[i]]++;
        }
        for(int i = 0; i<256; i++){
            if(freq[i])
            ans += freq[i] - 1;
        }
        return ans + 1;
    }
};