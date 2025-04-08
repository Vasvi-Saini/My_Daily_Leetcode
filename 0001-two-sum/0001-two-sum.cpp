class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 2nd approach tc O(nlog n) sort
        vector<pair<int, int>> memo;

        vector<int> res;

        int n = nums.size();

        for(int i=0; i<n; i++){
            memo.push_back({nums[i], i});
        }

        sort(memo.begin(), memo.end());

        int left = 0, right = nums.size()-1;

        while(left < right){
            if(memo[left].first + memo[right].first == target){
                res.push_back(memo[left].second);
                res.push_back(memo[right].second);
                return res;
            } 
            else if(memo[left].first + memo[right].first < target) left++;
            else right--;
        }
    return res;
    }
};