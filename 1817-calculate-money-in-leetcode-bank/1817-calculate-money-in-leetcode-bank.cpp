class Solution {
public:
    int totalMoney(int n) {
        int noOfWeeks = n/7;
        int count = 0;
        for(int i=1; i<=noOfWeeks; i++){
           count += 7*(2*i+6)/2;
        }
        int dayLeft = n%7;
        count += dayLeft * (2*(n/7 + 1) + dayLeft - 1)/2;
        return count;
    }
};