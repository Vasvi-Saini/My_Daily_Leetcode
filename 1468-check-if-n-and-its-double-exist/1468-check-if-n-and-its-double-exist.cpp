class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]] = i+1;
        }
        for(int j=0; j<arr.size(); j++){
            if(mp[arr[j]*2] && mp[arr[j] * 2] != j+1) return true;
        }
        return false;
    }
};