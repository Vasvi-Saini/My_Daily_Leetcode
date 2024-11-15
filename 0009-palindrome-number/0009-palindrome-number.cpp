class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int rem = 0;
        int sum = 0;
        int temp =  x;
        while(temp){
          rem = temp % 10;
            temp /= 10;
             if(sum>INT_MAX / 10) return false;
           sum = sum * 10 + rem;
        // if(sum>INT_MAX / 10) return false; 
        }
        // cout<<x<<" test"<<sum<<endl;
        if(x == sum) return true;
        return false;
    }
}; 