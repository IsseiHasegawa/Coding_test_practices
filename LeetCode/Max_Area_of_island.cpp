#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int m, n;
    int dfs(vector<vector<int>>& grid, int r, int l){
        if (r < 0 || r >= m || l < 0 || l >= n) return 0;
        if (grid[r][l] == 0) return 0;

        grid[r][l] = 0;

        int area = 1;
        area += dfs(grid, r+1, l);
        area += dfs(grid, r-1, l);
        area += dfs(grid, r, l+1);
        area += dfs(grid, r, l-1);

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int maxArea = 0;

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(grid, i, j));
                }
            }
        }

        return maxArea;
        
    }
};