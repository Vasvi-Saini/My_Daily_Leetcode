class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]] = i;  
               // 0 based indexing in .find function since it does key based checking hence ignore value 0 (map does not recognise a key with value 0 so we used .find function)
        }
        for(int j=0; j<arr.size(); j++){
            if(mp.find(arr[j]*2) != mp.end() && mp[arr[j] * 2] != j) return true;
        }
        return false;
    }
};