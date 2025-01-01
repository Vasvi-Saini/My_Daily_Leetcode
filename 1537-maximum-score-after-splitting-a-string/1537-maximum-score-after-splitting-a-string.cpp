class Solution {
public:
    int maxScore(string s) {
        int n = s.size();

        int ans = INT_MIN;

        for(int i=0; i<n-1; i++){

            // 0 to i        0 count

            int zero_count = 0;
            for(int j=0; j<=i; j++){
                if(s[j] == '0') zero_count++;
            }

            // i+1 to n-1   1 count
            int one_count = 0;
            for(int j=i+1; j<n; j++){
                if(s[j] == '1') one_count++;
            }

            ans = max(ans, zero_count + one_count);
        }
        return ans;
    }
};