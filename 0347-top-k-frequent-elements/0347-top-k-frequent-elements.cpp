class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto it : nums) {
            mp[it]++;
        }

        vector<int> ans;
        vector<pair<int, int>> p;
        for (auto i : mp) {
            p.push_back({i.second, i.first});
        }

        sort(p.begin(), p.end(), greater<pair<int, int>>()); // descending order
        int i = 0;
        while (k--) {
            ans.push_back(p[i].second);
            i++;
        }
        return ans;
    }
};