class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        while(i<nums.size() && nums[i]!=0) i++;
        if(i>= nums.size()-1) return;
        int j=i+1;
        while(j<nums.size()){
            if(nums[j]!=0){
                swap(nums[i], nums[j]) ;
                i++;
            }
            j++;
        }
    }
};