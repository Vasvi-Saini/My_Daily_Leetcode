class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> memo;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (memo.contains(diff)) {
                return vector<int> {memo[diff], i};
            }
            memo[nums[i]] = i; 
        }
        return vector<int> {};
    }
};