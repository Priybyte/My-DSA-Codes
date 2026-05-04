class Solution {
public:

    int solve(vector<int>&dp, int idx){    // top down - tc:O(n) , sc:O(n)

        if (idx<=1) return 1;  //agr 0 pe hai aur 0 pe jana hai toh count as 1 way not 0!!

        if (dp[idx]!=-1) return dp[idx];      //idx me khelo always 

        return dp[idx] = solve(dp,idx-1) + solve(dp,idx-2);
    }
    int climbStairs(int n) {

        vector<int> dp(n+1,-1);
        
        return solve(dp,n);
    }
};
