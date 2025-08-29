class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int num_in_Arr = 0;
      for(int i=0; i<nums.size(); i++){
        if(nums[i] != val){
            nums[num_in_Arr] = nums[i];
            num_in_Arr++;
        }
      }
      return num_in_Arr;
    }
};