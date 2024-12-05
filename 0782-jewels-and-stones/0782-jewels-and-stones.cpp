class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, bool> mp;
        for(auto i: jewels){
            mp[i] = true;
        }
        int count = 0;
        for(auto it: stones){
           if(mp[it]) count++;
        }
        return count;
    }
};