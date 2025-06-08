class Solution {
public:
    bool canMakeAll(vector<int> nums, int target, int k) {
        int n = nums.size();
        int ops = 0;
        
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] != target) {
            
                nums[i] *= -1;
                nums[i + 1] *= -1;
                ops++;
            }
        }
        
        return nums[n - 1] == target && ops <= k;
    }
    
    bool canMakeEqual(vector<int>& nums, int k) {
        return canMakeAll(nums, 1, k) || canMakeAll(nums, -1, k); 
    }
};