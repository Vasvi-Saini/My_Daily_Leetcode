class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 3rd approach hashmap tc O(n)
        unordered_map<int, int> map;
        
        vector<int> res;

        for(int i=0; i< nums.size(); i++){
            int a = nums[i];
            int b = target - a;
            if(map.find(b) != map.end()){   // vo chiz mil gyi h
                res.push_back(i);
                res.push_back(map[b]); // b ka index 
                return res;
            }
            map[a] = i; // agr nhi milta toh
        }

       return res;

    }
};