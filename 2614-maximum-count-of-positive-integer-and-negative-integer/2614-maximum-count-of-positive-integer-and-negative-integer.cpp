class Solution {
public:
    int maximumCount(vector<int>& nums) {
        // unordered_map<int, int> mp;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] > 0) mp[nums[i]]++;
        // }
        //  unordered_map<int, int> mpp;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] < 0) mpp[nums[i]]++;
        // }
        // return max(mp.size(), mpp.size());

       int count1 = 0, count2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0) {
                count1++;
            }
           if(nums[i] > 0) count2++;
        }
        return max(count1, count2);
    }
};