class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string , int> mp;

        for(auto i : bannedWords){
            mp[i]++;
        }
  int count = 0;
        for(auto i : message){
            if(mp[i] && count>=2){
                return true;
            }
            else if(mp[i]){
               count++;
            }
        }
        if(count>=2){
          return true;
        }
        return false;
    }
};