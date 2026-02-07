class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total_sum = 0;
        for(int i: arr){
            total_sum +=  i;
        }
        if(total_sum % 3 != 0) return 0;
        int curr_sum = 0;
        int count = 0;
        int target = total_sum / 3;
        for(int i : arr){
            curr_sum += i;
            if(curr_sum == target){
                count++;
                curr_sum = 0;
            }
        }
        return count >= 3;
    }
};