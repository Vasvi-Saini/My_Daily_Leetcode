class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
    int n = nums.size();
    int SUM = 0;

    // Calculate the total sum of the array, modulo p
    for(int &num : nums) {
        SUM = (SUM + num) % p;
    }

    // Calculate the target remainder we need to remove
    int target = SUM % p;

    // If the total sum is already divisible by p, no need to remove anything
    if(target == 0) {
        return 0;
    }

    unordered_map<int, int> mp;  
    int curr = 0;
    mp[0] = -1;  
    int result = n; 

 
    for(int j = 0; j < n; j++) {
        curr = (curr + nums[j]) % p;  // Update the current sum (modulo p)
        
        // Calculate the remainder we need to remove to make the sum divisible by p
        int remain = (curr - target + p) % p;

        // If this remainder was seen before, update the result with the smallest subarray length
        if(mp.find(remain) != mp.end()) {
            result = min(result, j - mp[remain]);
        }

        // Store the current remainder and its index
        mp[curr] = j;
    }

    // Return -1 if no valid subarray is found, otherwise return the length of the smallest subarray
    return result == n ? -1 : result;
    }
};