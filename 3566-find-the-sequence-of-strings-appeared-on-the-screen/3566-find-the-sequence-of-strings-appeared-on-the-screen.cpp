class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string currStr = ""; // Start with an empty string
        
        // Iterate through each character of the target string
        for (int i = 0; i < target.size(); i++) {
            while (currStr.size() <= i) {
                currStr += "a";            // Extend the string with 'a'
                ans.push_back(currStr);
            }
            
             // Incrementally change each character from 'a' to target[i]
            while (currStr[i] < target[i]) {
                currStr[i]++;
                ans.push_back(currStr);
            }
        }
        return ans;
    }
};