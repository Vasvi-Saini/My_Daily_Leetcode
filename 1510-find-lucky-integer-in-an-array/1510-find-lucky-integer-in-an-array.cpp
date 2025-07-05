class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        
        for(int i: arr){
            mp[i]++;
        }
        int maxi = -1;
        for(auto &p : mp){
            if(p.first == p.second) maxi = max(maxi, p.first);
        }
       
        return maxi;

        
    }
};