class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return 1;
        if(n%4!=0 || n==0) return 0;
        long long sum = 1;
        while(sum<=n){
            if(sum == n) return 1;
            sum *= 4;
        }

        return 0;
    }
};