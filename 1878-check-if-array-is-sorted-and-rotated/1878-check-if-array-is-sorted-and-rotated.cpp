void rotate(vector<int> &ar){
    // pass by reference
    int n = ar.size();
    int temp = ar[n-1];
    for(int i=n-2; i>=0; i--){
        ar[i+1] = ar[i];
    }
    ar[0] = temp;
    return;

}

class Solution {
public:
    bool check(vector<int>& nums) {
        // step1 sort
        vector<int> arr;

        arr = nums;  // vector m dono arr equal kr skte h
        sort(arr.begin(), arr.end());

        int n = nums.size();
        while(n){
            if(arr == nums) return 1;
            rotate(arr);
            n--;
        }
        return 0;
    }
};