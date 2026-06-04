class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;
        for(int num : st){
            if(st.find(num-1) == st.end()){   // we want to count from the start of the sequence -> isse phle wala no. must not exist
                int curr = num;   // stored that number
                int len = 1;      // updated the length of the consecutive series number
                while(st.find(curr+1) != st.end()){    // till its consecutive number exits in the set
                    len++;   
                    curr++;
                }
                longest = max(len, longest);
            }
        }
        return longest;

    }
};