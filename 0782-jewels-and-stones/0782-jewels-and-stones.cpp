class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char , int> mp;
        for(auto j: jewels){
            mp[j]++;
        }
        int count = 0;
        for(auto i: stones){
           if(mp[i] == 1) count++;
        }
        return count;
    }
};