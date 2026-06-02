class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int CurrConSeq = 1;
        int LongConSeq = 0;
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1) {
                CurrConSeq++;
                }
                else {
                    LongConSeq = max(CurrConSeq, LongConSeq);
                    CurrConSeq = 1;
                }
            }
        }
        return max(LongConSeq, CurrConSeq);
    }
};