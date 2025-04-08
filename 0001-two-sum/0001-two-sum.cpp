class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1st approach tc n^2
        int n = nums.size();
        vector<int> res;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                     res.push_back(i);
                     res.push_back(j);
                }
            }
        }
        return res;
    }
};