class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
                vector<string> ans;
        string temp;
        int i = 0;
        while(i+k < s.size()){
            ans.push_back(s.substr(i , k));
            i += k;
        }
        while(i < s.size()){
            temp += s[i];
            i++;
        } 
        while(temp.size() && temp.size() < k) temp += fill;
        if(temp.size())
        ans.push_back(temp);

        return ans;
    }
};