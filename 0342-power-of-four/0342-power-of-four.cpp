class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return 1;
        if(n<=0 || n%4!=0) return 0;
        double x = log2(n)/2.0;
        return floor(x) == ceil(x);
    }

};