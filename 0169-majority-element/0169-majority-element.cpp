class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore Voting Algorithm

        int candidate = 0; // stores the candidate who has appeared majority of times and who will win
        int count = 0;     // how many times he has appeared\

        for(int n : nums){
            if(count == 0) candidate = n;    // reset the candidate to next new number

            if(n == candidate) count++;
            else count--;

        }
        return candidate;
    }
};


//Every time we cancel different numbers, the majority element survives because it appears more than half the time.