class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        bool rowZero = 0, colZero = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (!matrix[i][j]) {
                      if (i == 0)
                        rowZero = 1;
                    if (j == 0)
                        colZero = 1;
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                  
                }
            }
        }

        for(int i = 1; i<r; i++){
            for(int j=1; j<c; j++){
                if(!matrix[0][j] || !matrix[i][0]){
                    matrix[i][j] = 0;
                }
            }
        }

        if(rowZero) for(int j = 0; j<c; j++) matrix[0][j] = 0;
        if(colZero) for(int i = 0; i<r; i++) matrix[i][0] = 0;
    }
};