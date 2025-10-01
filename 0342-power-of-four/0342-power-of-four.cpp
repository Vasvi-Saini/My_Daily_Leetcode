class Solution {
public:
    bool powerOfTwo(int n){
        if(n<=0) return 0;
        return(n&(n-1)) == 0;
    }
    
    bool isPowerOfFour(int n) {
       long long count = 0;
       if(n<=0) return 0;

      while(n){
       if(n&1) break;
       count++;
       n = n>>1;

      }
       if(powerOfTwo(n) && count%2 == 0) return 1;
       else return 0;
       
    }

};