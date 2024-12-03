class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowHasZero = false;
        bool colHasZero = false;

        // checking if first row has 0
        for(int i=0; i<matrix[0].size(); i++){    // matrix[0].size() gives no. of columns in first row of matrix.
            if(matrix[0][i] == 0){
                rowHasZero = true;
                break;
            }
        }

        // checking if first column has 0
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][0] == 0){
                colHasZero = true;
                break;
            }
        }
    
        // checking 0 in rest of array
        for(int i=1; i < matrix.size(); i++){
            for(int j=1; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

        for(int i=1; i < matrix.size(); i++){             // 3 3 matrix
            for(int j=1; j < matrix[i].size(); j++){   //  matrix[i].size() no columns in i-th row of 2D Arr matrix
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

      // set all the elements in row to 0
      if(rowHasZero){
        for(int i=0; i<matrix[0].size(); i++){
            matrix[0][i] = 0;
        }
      }

       // set all the elements in column to 0
      if(colHasZero){
        for(int i=0; i<matrix.size(); i++){
            matrix[i][0] = 0;
        }
      }

    }
};