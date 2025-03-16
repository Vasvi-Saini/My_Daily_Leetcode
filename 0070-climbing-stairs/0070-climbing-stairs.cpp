class Solution {
public:
int fib(int a, int b, int n){
    if(n==0){
        return b;
    }
    return fib(b , a+b , n-1);
}
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
       return fib(0,1,n);
    }
};