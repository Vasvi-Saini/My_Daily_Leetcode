class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {

       if(arr.size() == 1) return abs(arr[0] - brr[0]);

        if(arr == brr) return 0;

        long long i , Bef_Cost = 0 , Aft_Cost = 0;

            for(i  = 0; i<arr.size(); i++){
                Bef_Cost  += abs(arr[i] - brr[i]);
            }
            
            sort(arr.begin() , arr.end());
            sort(brr.begin() , brr.end());
        
            for(i  = 0; i<arr.size(); i++){
                Aft_Cost += abs(arr[i] - brr[i]);
            }
        
        return Bef_Cost <= Aft_Cost + k ? Bef_Cost : Aft_Cost+k;                                        
    }
};