class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        long long ans = 0;
        int n = x;
        while(n){
            int rem = n%10;
            ans = ans*10 + rem;
            n/=10;
        }
        return (ans == x);
    }
};