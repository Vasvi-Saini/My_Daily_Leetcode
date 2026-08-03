class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[abs(nums[i])] < 0) {  // if n0. is -ve  means already visited and now visiting seond tym 
                return abs(nums[i]);
            }
           nums[abs(nums[i])]  = - nums[abs(nums[i])];   // first tym visited then make it -ve
        }
        return 0;
    }
};