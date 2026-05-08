class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n = queries[0].size();
        vector<string> ans;
        for(auto i : queries){
            for(auto j: dictionary){
                int diff = 0;
                for(int idx=0; idx<n; idx++){
                    if(i[idx] != j[idx]) diff++;
                    if(diff > 2) break;
                }
                if(diff <= 2){
                    ans.push_back(i);
                    break;
                }     
                
            }
        }
        return ans;
    }
};