class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's voting Algorithm
        int n = nums.size();
        int votes = 0, candidate;
        for(int i=0; i<n; i++){
            if(votes == 0){ candidate = nums[i];
            votes = 1;
            }
            else{
                if(candidate == nums[i]) votes++;
                else votes--;
            }
        }
        return candidate;
    }
};