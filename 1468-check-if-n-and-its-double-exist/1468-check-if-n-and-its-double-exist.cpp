class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]] = i+1;  // 1 based indexing since map does not recognize key with value 0
        }
        for(int j=0; j<arr.size(); j++){   // value based checking
            if(mp[arr[j]*2] && mp[arr[j] * 2] != j+1) return true;   //mp[arr[i]] gives value of key at arr[i] in map
        }
        return false;
    }
};