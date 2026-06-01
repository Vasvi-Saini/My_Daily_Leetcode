class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> count(256, false);
        int length=0, end=0, start=0;
        int s1 = s.size();
        while(end < s1){
            while(count[s[end]]){ // character already present
                count[s[start]] = false;     // leftmost character-> remove
                start++;     //start update
            }
            // not present
            count[s[end]] = true;
            length = max(length, end-start + 1);
            end++;
        }
        return length;
    }
};

//tc => O(n) start -> 0 to n-1 , end = 0 to n-1
// sc -> fixed -> 256 -> O(1) 