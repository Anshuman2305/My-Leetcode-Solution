class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.size()==0 || grid[0].size()==0) return 0;
        int result = 0;
        for(int i=0; i<grid.size(); i++) //for traversing row
        {
            for(int j=0; j<grid[0].size(); j++) //or traversing column
            {
                if(grid[i][j] == 1) 
                {
                    result+=4; //for every land we are adding 4
                    
                    if(i>0 && grid[i-1][j] == 1) //checking element on upper row for land
                        result-=2;
                    
                    if(j>0 && grid[i][j-1] == 1) //checking element on upper row for land
                        result-=2;
                }
                    
                    
            }
        }
        return result;
    }
};