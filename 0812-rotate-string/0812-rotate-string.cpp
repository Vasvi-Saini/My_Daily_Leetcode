class Solution {
public:
    bool rotateString(string s, string goal) {
    if(s.size() != goal.size()) return false;

    string newStr = s+s;    // new concatenated string
    
     return newStr.find(goal) < newStr.length();  
    }
};