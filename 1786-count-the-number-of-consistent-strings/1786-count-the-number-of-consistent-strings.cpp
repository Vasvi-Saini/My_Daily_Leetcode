class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, bool> mp;

        for(auto it: allowed){
            mp[it] = true;
        }
        int count = 0;

        for(int i=0; i<words.size(); i++){
            int j;
            for(j= 0; j<words[i].size(); j++){
                if(!mp[words[i][j]]) break;
            }
            if(j == words[i].size()) count++;
        }
        return count;
    }
};