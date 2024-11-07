class Solution {
public:
    int totalMoney(int n) {
        int noOfWeeks = n/7;
        int count = 0;
        for(int i=1; i<=noOfWeeks; i++){
            for(int j=i; j<i+7; j++){   // 7 days
               count += j;
            }
        }
        int dayLeft = n%7;
        int k = noOfWeeks + 1;
        while(dayLeft--){
            count += k;
            k++;
        }
        return count;
    }
};