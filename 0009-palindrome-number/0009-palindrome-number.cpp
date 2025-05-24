class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int rem = 0;
        int sum = 0;
        int n = x;
        while(n){
            rem = n%10;
            n /= 10;
            if(sum > INT_MAX/10) return 0;
            sum = sum*10 + rem;
        }
        if(sum == x) return 1;
        return 0;

    }
};