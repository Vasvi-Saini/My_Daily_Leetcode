class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans(k);
        vector<vector<int>> bucket(nums.size()+1);
        for(auto i: nums) mp[i]++;
        for(auto i: mp) bucket[i.second].push_back(i.first);
        for(int i=bucket.size()-1; i >= 0 && k; i--)
            for(int j=0; j<bucket[i].size(); j++){
             ans[--k] = bucket[i][j];
             if(!k) break;
            }
        return ans;
    }
};