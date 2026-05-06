class Solution {
public:

    int solve(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& grid){

        if (i==0 && j==0) return grid[i][j]; //agr dono 0 it means we reach destination add that particular element

        if (i<0 || j<0) return 1e9;   //agr 1e9 ke jgh INT_MAX use krte then in line 12 and 13 runtime err aa jata coz overflow kr jata even if we add any small value to INT_MAX

        if (dp[i][j]!=-1) return dp[i][j];

        int up = grid[i][j] + solve(i-1,j,dp,grid);
        int left = grid[i][j] + solve(i,j-1,dp,grid);

        return dp[i][j] = min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m =grid[0].size();

        vector<vector<int>> dp(n,vector<int>(m,-1)); //tht's how we declare 2d dp , remember always

        return solve(n-1,m-1,dp,grid);
    }
};
