class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        int i = 0;

        while(i<n){
           // int ci = nums[i] - 1;       Correct iSdx of nums[i] is nums[i]-1
            if(nums[i] > 0 && nums[i] <=n && nums[i] != nums[nums[i] - 1]) swap(nums[i] , nums[nums[i]-1]);  // if no.>0 && no<n && no. != no.sitting there means duplicate 
            else i++;     // for negative since no<0 
        }

        for(int i=0; i<n; i++){
            if(nums[i] != i+1) return i+1;     // no is not at idx i.e idx+1
        }

        return n+1;    // no missing no.
    }
};