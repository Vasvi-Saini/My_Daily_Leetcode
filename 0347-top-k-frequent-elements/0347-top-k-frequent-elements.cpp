class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
       
       vector<int> ans;
        priority_queue<pair<int, int>> Pq;  // Max Heap

        for(auto it: mp){
            Pq.push({it.second, it.first});
        }

        while(k--){
            ans.push_back(Pq.top().second);
            Pq.pop();
        }

        return ans;
    }
};