class Solution {
public:
    bool isValid(string s) {
    //    unordered_map< int, char> mp;
    //    for(auto i: s){
    //     mp.push(s[i]) 
    //    }


    stack<char> st;
  
   for(auto i: s){
        if(i == '{' || i == '(' || i == '['){
         st.push(i);
         continue;
        }
      if(!st.empty() && ((i==')' && st.top() =='(') || (i=='}' && st.top() =='{') || (i==']' && st.top() =='['))){
        // if(i == '}' || i == ')' || i == ']'){
         st.pop();
        }
        else return false;
    }

        return st.empty();
    }
};