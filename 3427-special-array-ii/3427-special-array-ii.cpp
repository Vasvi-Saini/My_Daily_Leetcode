class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {

        int n = queries.size();
        vector<bool> ans(n);
        vector<int> violating_indices;

        for (int i = 1; i < nums.size(); i++) {
            // same parity, found violating index
            if (nums[i] % 2 == nums[i - 1] % 2) {
                violating_indices.push_back(i);
            }
        }

        for (int i = 0; i < n; i++) {

            vector<int> query = queries[i];
            int start = query[0];
            int end = query[1];

            bool foundViolatingIndex = binarySearch(start + 1, end, violating_indices);

            if (foundViolatingIndex) ans[i] = false;
            else  ans[i] = true;   
        }

        return ans;
    }

private:
    bool binarySearch(int start, int end, vector<int>& violating_indices) {

        int left = 0;
        int right = violating_indices.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int violatingIndex = violating_indices[mid];

            if (violatingIndex < start) {
                left = mid + 1;          // check right half
            } 

            else if (violatingIndex > end) {
                right = mid - 1;          // check left half
            } 
            
            else  return true;           // violatingIndex falls in between start and end
            
        }

        return false;
    }
};
