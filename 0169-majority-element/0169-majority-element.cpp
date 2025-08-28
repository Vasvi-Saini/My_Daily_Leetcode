class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        int ans = 0;
        int max_count = 0;

        for(int n : nums){
            mp[n]++;
            if(mp[n] > max_count){
                ans = n;
                max_count = mp[n];   //highest freq;
            }
        }
        return ans;
    }
};