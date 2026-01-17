class Solution {
public:
    bool check(vector<int>& nums) {
        int i , count = 0;
        for(i = 1; i<nums.size(); i++){
             if(nums[i-1] > nums[i]){
             count++;
            }
            if(count == 2) break;
        }
        
        if(count == 2) return 0;
        if(i == nums.size() && count == 0) return 1;
        return nums[nums.size()-1] <= nums[0];
    }
};