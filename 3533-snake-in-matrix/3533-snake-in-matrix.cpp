class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
         vector<vector<int>> path(n , vector<int>(n));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                path[i][j] = (i*n)+j;
            }
        }
        int r=0,c=0;
        for(int i = 0; i<commands.size(); i++){
            if(commands[i] == "UP") r--;
            else if(commands[i] == "DOWN") r++;
            else if(commands[i] == "LEFT") c--;
            else c++;
        }
        return path[r][c];
    }
};