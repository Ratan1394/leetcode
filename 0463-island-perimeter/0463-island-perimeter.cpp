class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        // int start = 0;
        // int end = row*col -1;
        int parameter = 0;

        for(int i =0; i< row;i++){
            for(int j =0; j< col; j++){
                if(grid[i][j] == 1){
                    parameter = parameter +4;
                    if(i>0 && grid[i-1][j] == 1){
                    parameter = parameter -2;
                }
                if(j>0 && grid[i][j-1] == 1){
                    parameter = parameter -2;
                }
                }
                 
            }
        }
        return parameter;
        
    }
};