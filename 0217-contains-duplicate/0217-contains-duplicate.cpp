class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> st;
       for(auto i: nums){
        st.insert(i);
       } 

       if(nums.size() ==  st.size()) return 0;
       return 1;
    }
};