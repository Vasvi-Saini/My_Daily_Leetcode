class Solution {
public:
    string convertDateToBinary(string s) {
        int y = 0, m=0 , d=0;

        int i = 0;

        while(s[i]!= '-'){
           y = (y*10)+(s[i]-'0');
           i++;
        }
        i++;
        while(s[i]!= '-'){
           m = (m*10)+(s[i]-'0');
           i++;
        }
        i++;
        while(i<s.size()){
           d = (d*10)+(s[i]-'0');
           i++;
        }
       
       string ye , mo , da;

       while(y){
          int rem = y%2;
          ye += to_string(rem);
          y /= 2;
       }

       while(m){
        int rem = m%2;
        mo += to_string(rem);
        m/=2;
       }

       while(d){
        int rem = d%2;
         da += to_string(rem);
         d/=2;
       }
         i = ye.size()-1;
       while(ye[i] == '0'){
           ye.pop_back();
       }
       i=da.size()-1;
       while(da[i] == '0'){
        da.pop_back();
       }
       i=mo.size()-1;
       while(mo[i]=='0'){
         mo.pop_back();
       }
       reverse(da.begin() , da.end());
       reverse(ye.begin() , ye.end());
       reverse(mo.begin() , mo.end());
       

       string ans = ye + '-' + mo + '-' + da;

       return ans;
    }
};