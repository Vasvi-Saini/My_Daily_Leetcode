class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501] = {0};
        for(int i: arr) freq[i]++;

        int maxi = -1;
        for(int i=1; i<=500; i++){
            if(freq[i] == i) maxi = max(maxi, i);
        }

        return maxi;
    }
};