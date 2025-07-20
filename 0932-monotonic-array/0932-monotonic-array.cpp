class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
          bool flag = 1;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                flag = 0;
                break; 
            }
        }

        if(flag) return 1;

        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                return 0;
            }
        }

        return 1;
        
    }
};