class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         set<vector<int>> s;
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i< n-1; i++){
            for(int j = i+1; j<n; j++){
            long long current_target = target - nums[i];
            long long ans = current_target-nums[j];
            int start = j+1;
            int end = n-1;
            while(start < end){
                if(nums[start]+nums[end]==ans){ s.insert({nums[i],nums[j],nums[start],nums[end]});
                start++;
                end--;
                }
                else if(nums[start] + nums[end]>ans) end--;
                else start++;
            } 
            }
        }
        for(auto quad : s){
            v.push_back(quad);
        }
        return v;
    
    }
};