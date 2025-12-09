class Solution {
public:
    long long rev(int n){
        long long x = 0;
        while(n){
          x = (x*10) + n%10;
          n /= 10;
        }
        return x;
    } 
    long long sumAndMultiply(int n) {
        long long sum = 0, x = 0;
        while(n){
            int rem = n%10;
            if(rem){
                x = (x*10) + rem;
                sum += rem;
            } 
            n /= 10;
        }
        return sum * rev(x);
    }
};