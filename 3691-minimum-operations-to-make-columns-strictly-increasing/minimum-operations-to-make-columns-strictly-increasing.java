class Solution {
    public int minimumOperations(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;

        int ans = 0;

        for(int i=0; i<n; ++i){
            for(int j=1; j<m; ++j){
                if(grid[j][i] <= grid[j-1][i]){
                    int tmp = grid[j-1][i] - grid[j][i] + 1;
                    ans += tmp;
                    grid[j][i] += tmp;
                }
            }
        }

        return ans;
    }
}