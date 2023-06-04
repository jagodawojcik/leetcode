class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (grid.size() == 0){
            return 0;
        }
        if(grid.size() == 1){
            return count(grid[0].begin(), grid[0].end(), 1)*2+2;
        }

        int count_ones = 0;
        int ones_columns = 0;
        int ones_rows = 0;

        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    count_ones++;
                }
                if (i+1 < grid.size()){
                    if(grid[i+1][j] == 1 && grid[i][j] == 1){
                        ones_columns++;
                    }
                }
                if (j+1 < grid[0].size()){
                    if(grid[i][j+1] == 1 && grid[i][j] == 1){
                        ones_rows++;
                    }
                }
            }
        }
        
        int perimeter = count_ones*4 - ones_columns*2 - ones_rows*2;
        return perimeter;
    }
};