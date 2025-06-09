class NumArray {
public:

    vector<int> prefix;

    NumArray(vector<int>& nums) {
        prefix.resize(nums.size());
        prefix[0] = nums[0];

        for(int i = 1; i<nums.size(); i++){
          prefix[i] = prefix[i-1] + nums[i];
        }

    }
    
    
    
    int sumRange(int left, int right) {
        // Prefix_Sum arr m hmare pass 0-1 0-2 0-3 0-4 tk kam sum h pr agr left 0 ho hi na toh
        if(left > 0 ){
            return prefix[right] - prefix[left-1]; // left wala minus krdo 
        }

        return prefix[right];    // exact 0 to something h toh return krdo
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */