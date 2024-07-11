class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>vasvi;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == '(') vasvi.push(i);
            else if(s[i] ==')'){
                int start = vasvi.top() + 1;
                int end = i;
                reverse(s.begin() + start, s.begin() + end);
                vasvi.pop();
            }
        }
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]== '(' || s[i] == ')') continue;
            else ans.push_back(s[i]);
        }
        return ans;
    }
};