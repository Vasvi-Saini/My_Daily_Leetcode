class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[abs(nums[i])] < 0) return abs(nums[i]);
        //     nums[abs(nums[i])] = -nums[abs(nums[i])];
        // }
        // return -1;



        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] == nums[j]) return nums[i];
        //     }
        // }  // y tle degaS
        // return 0;


// sort krke  O(nlogn )

// sort(nums.begin(), nums.end());

//     for(int i=0; i<nums.size()-1; i++){ // second last element tk chlega
//    if(nums[i] == nums[i+1]) return  nums[i];
  
//   }
// return 0;



// frequency array
  vector<int> arr(nums.size(), 0);
  for(int i=0; i<nums.size(); i++){
    arr[nums[i]]++;
  }
  for(int i=0; i<nums.size(); i++){
    if(arr[i] > 1) return i;
  }

  return 0;

    }
};