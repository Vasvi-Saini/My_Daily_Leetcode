class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxi = events[0][1] , ans = events[0][0];

        for(int i = 1; i<events.size(); i++){

            int diff = events[i][1] - events[i-1][1];

            if(diff == maxi){
                ans = min(ans , events[i][0]);
            }

            else if(diff > maxi){
                maxi = diff;
                ans = events[i][0];
            }
        }
        
        return ans;
    }
};