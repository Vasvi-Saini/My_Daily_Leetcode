class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            prefix.push_back(sum);
        }

    }
    
    int sumRange(int left, int right) {
        // Prefix_Sum arr m hmare pass 0-1 0-2 0-3 0-4 tk kam sum h pr agr left 0 ho hi na toh
        if(left > 0 ){

            return prefix[right] - prefix[left-1]; // left wala minus krdo 

        }
        return prefix[right];    // exact 0 to si=omething h toh return krdo
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */