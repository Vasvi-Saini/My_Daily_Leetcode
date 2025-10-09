class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto it: nums){
            mp[it]++;
        }
        
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

       for(auto i: mp){
        minHeap.push({i.second, i.first});
       }

       vector<int> result;
       vector<int> ans;

       while(!minHeap.empty()){
             result.push_back(minHeap.top().second);
             minHeap.pop();
       }
       reverse(result.begin(), result.end());

       for(int i=0; i<k; i++){
        ans.push_back(result[i]);
       }

       return ans;
     }
};