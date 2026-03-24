#include <bits/stdc++.h> 

int index(int idx,vector<int>&heights,vector<int>&dp){   //tc:O(n),sc:O(n) {recursion depth}
    if (idx==0) return 0;

    if (dp[idx]!=-1) return dp[idx];

    int step1 = index(idx-1,heights,dp) + abs(heights[idx]-heights[idx-1]);

    // int step2=0;
    int step2=INT_MAX; //step 2!=0 , think of array size 1
    if (idx>1) step2 = index(idx-2,heights,dp) + abs(heights[idx]-heights[idx-2]);

    return dp[idx]= min(step1,step2);

}

int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n+1,-1);
    return index(n-1,heights,dp); //return n-1 not n coz we want index not size 
    
}
