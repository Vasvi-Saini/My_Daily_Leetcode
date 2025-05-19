class Solution {
public:
    bool isEquilateral(vector<int>& nums) {
        if(nums[0] == nums[1] && nums[0] == nums[2] && nums[1] == nums[2]) return 1;
        return 0;
    }
    bool isisosceles(vector<int>& nums) {
        if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) return 1;
        return 0;
    }
    bool isscalene(vector<int>& nums) {
        if(nums[0] != nums[1] != nums[2]) return 1;
        return 0;
    }
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0] +nums[1] <= nums[2]) return "none";
        if(isEquilateral(nums)) return "equilateral";
        if(isisosceles(nums)) return "isosceles";
        return "scalene";
    }
};