class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        int res = 0; // to store number that appears majority number of times
        int majority_count = 0; // how many times the number has appeared
        

        for (int i : nums) {
            mp[i]++;
            if (mp[i] > majority_count) {   // if freq is greater than the majority_count
                res = i;                     // i means that number which occured max number of times
                majority_count = mp[i];
            }
        }
        return res;
    }
};