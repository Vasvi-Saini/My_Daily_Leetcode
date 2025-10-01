class Solution {
public:
    bool isPowerOfFour(int n) {
       long long count = 0;
       if(n<=0) return 0;

      while(n){
       if(n&1) break;
       count++;
       n = n>>1;

      }
       if((__builtin_popcount(n) == 1)&& count%2 == 0) return 1;
       else return 0;
       
    }

};