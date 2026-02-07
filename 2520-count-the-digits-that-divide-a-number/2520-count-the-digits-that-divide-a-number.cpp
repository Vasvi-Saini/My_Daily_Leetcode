class Solution {
public:
    int countDigits(int num) {
        int original_num = num;
        int count = 0;
        while(original_num){
            int digit = original_num % 10;
            original_num /= 10;
            if(digit != 0 && num % digit == 0) count++;
        }
        return count;
    }
};