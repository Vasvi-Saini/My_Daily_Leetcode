class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

          for(int i=1;i<n;i++){   
         // checking that array is sorted in increasing order find the point where increasing order breaks
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }

        if(nums[n-1]>nums[0]){    // check if array is rotated
            cnt++;
        }

        return cnt<=1;
       
    }
};