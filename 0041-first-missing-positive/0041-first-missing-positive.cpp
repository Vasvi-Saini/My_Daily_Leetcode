class Solution {
public:
    int firstMissingPositive(vector<int>& nums){
        int n = nums.size();
        vector<int> hash(n+1,-1); 
        for(int i = 0; i<n; i++){
             if(nums[i] > 0 && nums[i]<=n) hash[nums[i]]++;
        }
        for(int i = 1 ; i<hash.size(); i++){
            if(hash[i] == -1){
                return i;
            }
        }
        return n+1;
    }
};