class Solution {
public:
    bool check(vector<int>& nums) {
        int n  = nums.size();
        int count = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] < nums[i]) count++; 
        } 
        if(count == 0 ) return 1;
        if(count == 1 && nums[0] >= nums[n-1]) return 1;
        return 0;
    }
};