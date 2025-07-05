class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int n: nums)
        {
           mp[n]++;
        }
        int maxi = nums.size()/2;
        
        for(auto &p: mp){
           if(p.second > maxi) return p.first;
        }
        return maxi;
    }
};