class Solution {
public:

    int solve(int idx,vector<int>&dp){            //TOP DOWN , tc: O(n),sc:O(n)

        if (idx<=1) return idx;                   //index me khelo always 

        if (dp[idx]!=-1) return dp[idx];

        return dp[idx] = solve(idx-2,dp) + solve(idx-1,dp);
    }
    int fib(int n) {   

        vector<int> dp(n+1,-1);

        return solve(n,dp);
    }
};
