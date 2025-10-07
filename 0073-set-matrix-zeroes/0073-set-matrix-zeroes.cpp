class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int r = matrix.size();
       int c = matrix[0].size();
       vector<vector<int>> mat1(r, vector<int>(c));
       for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          mat1[i][j] = matrix[i][j];
        }
       }

       for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(mat1[i][j] == 0){
                for(int a = 0; a<r; a++) matrix[a][j] = 0;
                for(int b=0; b<c; b++) matrix[i][b] = 0;
            }
        }
       }



    }
};