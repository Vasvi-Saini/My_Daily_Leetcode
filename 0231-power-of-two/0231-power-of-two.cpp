class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        long long num = (long long) n;
         if(n<=0) return 0;
        return ((n & n-1)) == 0;
    }
};