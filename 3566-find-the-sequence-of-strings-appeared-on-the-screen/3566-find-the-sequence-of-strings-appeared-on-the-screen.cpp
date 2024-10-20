class Solution {
public:
    vector<string> stringSequence(string target) {
         vector<string> ans;
        string s;
        for(int i = 0; i<target.size(); i++){
            s += "a";
            if(s[i] != target[i]){
                for(int j = s[i]; j!=target[i]; j++){
                    ans.push_back(s);
                    s[i] += 1;
                }
                ans.push_back(s);
            }
            else{
                ans.push_back(s);
            }
        }
        return ans;
    }
};