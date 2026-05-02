class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       // T.C = O(NlogN);
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(),nums.end());
        int CurrConSeq = 1;
        int LongConSeq = 0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]) {   // both numbers are diff
                if(nums[i] == nums[i-1] + 1){
                    CurrConSeq++;
                }
                else{
                    LongConSeq = max(CurrConSeq, LongConSeq);
                     CurrConSeq = 1;
                }
            } 
        }
        return max(CurrConSeq, LongConSeq);
    }
};