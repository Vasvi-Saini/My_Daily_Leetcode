class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        bool row = 0, col = 0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(!matrix[i][j]){
                    if(i==0) row = 1;
                    if(j==0) col = 1;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1; i<r; i++){  // baaki ki matrix ko 0 krdo 1 idx k baad wali jo 
            for(int j=1; j<c; j++){
                if(matrix[0][j]==0 || matrix[i][0] == 0) matrix[i][j] = 0;
            }
        }

       if(row){
        for(int j=0; j<c; j++) matrix[0][j] = 0;
       }
       if(col){
        for(int i=0; i<r; i++) matrix[i][0] = 0;
       }

    }
};