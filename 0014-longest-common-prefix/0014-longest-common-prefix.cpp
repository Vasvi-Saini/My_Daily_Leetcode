class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // If the input vector is empty, return an empty string
        
        // Iterate over the characters of the first string
        for (int i = 0; i < strs[0].size(); ++i) {
            // Check if the character at index 'i' is the same in all strings
            for (int j = 1; j < strs.size(); ++j) {
                // If we reach the end of any string or find a character that doesn't match, return the prefix found so far
                if (i >= strs[j].size() || strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        // If all strings are identical or there's only one string, return the entire string
        return strs[0];
    }
};