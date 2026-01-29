class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total_sum = 0;
        for(int x : arr){
            total_sum += x;
        }
        if(total_sum %3 != 0) return false;
        int curr_sum = 0, count = 0;
        int target = total_sum / 3;
        for(int x: arr){
            curr_sum += x;
            if(curr_sum == target){
                count++;
                curr_sum = 0;
            } 
        }
        return count >= 3;
    }
};