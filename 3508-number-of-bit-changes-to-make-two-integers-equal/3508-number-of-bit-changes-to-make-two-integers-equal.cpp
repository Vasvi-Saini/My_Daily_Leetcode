class Solution {
public:
    string to_binary(int no){
        string s;
        while(no){
            s += to_string(no%2);
            no/=2;
        }
        reverse(s.begin() , s.end());
        return s;
    }

    int minChanges(int n, int k) {
        if(n == k) return 0;

       string no =  to_binary(n);
       string ko = to_binary(k);
         
           while(no.size() < ko.size()){
              no = '0' + no;
           }
           while(ko.size()<no.size()){
              ko = '0' + ko;
           }
           int count = 0;
           for(int i = 0; i<no.size(); i++){
                 if(no[i] == '1' && ko[i] == '0') count++;
                 if(no[i] == '0' && ko[i] == '1') return -1;
            }
            
        return count;
    }
};