class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int minRow = rows;
        int maxRow = -1;
        int minCol = cols;
        int maxCol = -1;
        
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(grid[i][j] == 1){
                    minRow = min(minRow , i);
                    maxRow = max(maxRow , i);
                    minCol = min(minCol , j);
                    maxCol = max(maxCol , j);  
                }
            }
        }
        
         if(maxRow == -1 || minRow == -1) return 0;
         return ((maxRow - minRow) + 1)*((maxCol - minCol) + 1);
    }
};