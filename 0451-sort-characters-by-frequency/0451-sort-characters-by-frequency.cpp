class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        string ans;

        for (auto i : s) {
            mp[i]++;
        }

        vector<pair<int, char>> freq;

        for (auto i : mp) {
            freq.push_back({i.second, i.first});
        }

        sort(freq.begin(), freq.end(), greater<pair<int, char>>());

        for (auto i : freq) {
            while (i.first--) {
                ans += i.second;
            }
        }

        return ans;
    }
};