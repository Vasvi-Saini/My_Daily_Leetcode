class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> lower(26, 0);
        vector<bool> upper(26, 0);

        for(auto i: jewels){
            if(i > 97){
               lower[i-'a'] = 1;
            }
            else{
                upper[i-'A'] = 1;
            }
        }
        int count = 0;
       for(auto i : stones){
        //  if(lower[i - 'a'] == 1 || upper[i-'a'] == 1) count++;
        if(i > 97){
            lower[i - 'a'] == 1 ? count++ : count += 0;
        }
        else upper[i - 'A'] == 1 ? count++ : count += 0;
       }
        return count;
    }
};