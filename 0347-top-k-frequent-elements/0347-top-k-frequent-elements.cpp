class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }

        vector<int> ans;

        vector<pair<int, int>> V;
        for(auto i: mp){
            V.push_back({i.second, i.first});
        }

        sort(V.begin(), V.end()); // asc

        while(k--){
            ans.push_back(V.back().second);
            V.pop_back();
        }
        return ans;
    }
};