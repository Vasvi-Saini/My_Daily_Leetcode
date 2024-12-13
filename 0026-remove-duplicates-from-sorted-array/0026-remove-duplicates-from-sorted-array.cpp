class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int> uniques(nums.begin(), nums.end());
        // can't use since space co plexity is supposed to be O(1)
      
      // in-place two-pointer technique
      int insert_position = 1; 
      for(int i=1; i<nums.size(); i++){
        if(nums[i-1] != nums[i]){
            nums[insert_position] = nums[i];
            insert_position++;
        }
      }
     return insert_position;
    }
};