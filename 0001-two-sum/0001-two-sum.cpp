class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> res;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //     if(nums[i] + nums[j] == target) {
        //         res.push_back(i);
        //         res.push_back(j);
        //     }
        // }
        // }
        // return res;    O(n^2)



        //sorting -> O(nlogn) usse index change hojaenge or index hi return krna tha


        // vector<pair<int,int>> memo;   
         // hr dbba ek pair h no. or uska idx store hoga poorane wale arr ka  1,1 
         // vector pair wale element ko sort krne p first element k basis p sort hota h

        //  vector<int> res;

        //  for(int i=0; i<nums.size(); i++){
        //     memo.push_back({nums[i],i});
        //  }

        //  sort(memo.begin(), memo.end());

        //  int left = 0, right = nums.size()-1;

        //  while(left < right){
        //     if(memo[left].first + memo[right].first == target){
        //         res.push_back(memo[left].second);
        //         res.push_back(memo[right].second);
        //         return res;
        //     }
        //     else if(memo[left].first + memo[right].first < target) left++;
        //     else right--;
        //  }

        //  return res;



        //using hashmap

        unordered_map<int, int> map;
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            int b = target - a;
            if(map.find(b) != map.end()){
                res.push_back(i);
                res.push_back(map[b]);
                return res;
            }
            map[a] = i;
        }


      return res;


    }
};