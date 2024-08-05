class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int> mp;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        vector<string> ans;
        for(auto i : arr){
            if(mp[i] == 1) ans.push_back(i);
        }
       if(k > ans.size()) return "";
        return ans[k-1];
    }
};