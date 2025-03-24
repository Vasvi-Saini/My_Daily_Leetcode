class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int rem = 0;
        int sum = 0;
        int temp = x;
        while(temp!=0){
           rem = temp%10;
            temp/=10;
            if(sum > INT_MAX/10) return 0;
            sum = sum*10 + rem;
        }
        if(sum == x) return 1;
        else return 0;
    }
};