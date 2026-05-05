#include <bits/stdc++.h> 

int solve(int idx,vector<int>&dp,vector<int>&heights){    //tc:O(n),sc:O(n) 

    if (idx==0) return 0;

    if (dp[idx]!=-1) return dp[idx];

    int oneStep = solve(idx-1,dp,heights) + abs(heights[idx]-heights[idx-1]);
    int twoStep = INT_MAX; //compare karane ke liye max value le lo

    if (idx>1) twoStep = solve(idx-2,dp,heights) + abs(heights[idx]-heights[idx-2]);  //tbhi calculate karo agr idx>1 coz idx<1 ke liye negative index dega ,program will crash

    return dp[idx] = min(oneStep,twoStep);
}


int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1,-1);            
    return solve(n-1,dp,heights);     //jb bhi array given ho then alwys pass n-1 not n , coz array ka last index is n-1 
}
