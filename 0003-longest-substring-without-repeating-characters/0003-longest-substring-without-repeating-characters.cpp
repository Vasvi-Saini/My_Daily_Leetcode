class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // TC O(n)
        unordered_set<char> st;
        int left = 0, maxLen = 0;
        for(int right = 0; right<s.size(); right++){
            while(st.count(s[right])){         //duplicate
                st.erase(s[left]);     // remove left
                left++;
            }
            // if it is not present in set
            st.insert(s[right]);
            maxLen = max(maxLen , right-left+1);
        }
        return maxLen;
    }
};