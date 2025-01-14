class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n);
      
        for(int jha_tk_jana = 0; jha_tk_jana < n; jha_tk_jana++){

            int count = 0;

            for(int A_i = 0; A_i <= jha_tk_jana; A_i++){

                for(int B_i =0; B_i <= jha_tk_jana; B_i++){

                    if(A[A_i] == B[B_i]){
                        count++;
                    }
                }
            }
            ans[jha_tk_jana] = count;
        }
        return ans;
    }
};