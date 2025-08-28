class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        int res = 0; // to store number that appears majority number of times
        int majority_count = 0; // how many times the number has appeared
        

        for (int i : nums) {
            mp[i]++;
            if (mp[i] > majority_count) {
                res = i;
                majority_count = mp[i];
            }
        }
        return res;
    }
};