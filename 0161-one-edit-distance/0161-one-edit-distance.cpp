class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();

        if((l1 - l2) > 1) return false;
      
        // string shorter = l1 < l2 ?  s: t;
        // string longer = l1 < l2 ? t : s;

        if(l1 > l2) return isOneEditDistance(t,s); // shorter string  processed always        
       

        for(int i = 0; i<l1; i++){
           if(s[i] != t[i]){    // difference is found
                if(l1 == l2){   // length incase is same then compare rest substring
                    return s.substr(i+1) == t.substr(i+1); // replacement checks 
                }
                return s.substr(i) == t.substr(i+1); // length was not same so checked for insertion 
           }
            }
        
   return (l1 + 1 == l2);
    
    }
};