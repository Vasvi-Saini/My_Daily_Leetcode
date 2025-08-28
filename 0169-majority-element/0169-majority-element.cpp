class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        int res = 0; // how many times the number has appeared
        int majority_num = 0; // to store number that appears majority number of times

        for (int i : nums) {
            mp[i]++;
            if (mp[i] > majority_num) {
                res = i;
                majority_num = mp[i];
            }
        }
        return res;
    }
};