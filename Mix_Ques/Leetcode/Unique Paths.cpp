class Solution {
public:

    int solve(int i,int j,vector<vector<int>>&dp){ //it is a 2d dp coz 2 parameters are changing i and j , if 3 parameters would have beenn changing then it would have been a 3d dp , no of parameters changing = no of dimension of dp (VVIP) 

        if (i<0 || j<0) return 0;  //tc:O(m*n),sc:O(m*n)
        if (i==0 && j==0) return 1;

        if (dp[i][j]!=-1) return dp[i][j];

        int up = solve(i-1,j,dp);
        int left = solve(i,j-1,dp);

        return dp[i][j] = up + left;
    }

    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m,vector<int>(n,-1)); //tht's how u declare 2d dp , remember always
        
        return solve(m-1,n-1,dp);
    }
};
