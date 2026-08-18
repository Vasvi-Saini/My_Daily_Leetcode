class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        int max_freq = 0;
        for(auto i: mp){
            max_freq = max(max_freq, i.second);
        }
        int ans = 0;
        for(auto i: mp){
            if(i.second == max_freq){
                ans += i.second;
            }
        }
        return ans;
    }
};