class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> numMap;
        for(int num : nums){
            if(numMap.find(num) != numMap.end()){
                return num;
            }
        
        numMap[num] = 1;
        }
    return -1;
    }
};