#include <bits/stdc++.h> 

int solve(int idx,vector<int>&dp,vector<int>&nums){   //tc:O(n),sc:O(n)

        if (idx==0) return nums[0];
        if (idx==1) return max(nums[1],nums[0]);  //jaise hi idx=1 turant return krwa do coz we can't do idx-2 from idx=1 as it will give idx=-1 and program will crash

        if (dp[idx]!=-1) return dp[idx];

        int pick = nums[idx] + solve(idx-2,dp,nums);
        int Notpick = 0 + solve(idx-1,dp,nums);

        return dp[idx] = max(pick,Notpick);
}


int maximumNonAdjacentSum(vector<int> &nums){
    
    int n=nums.size();

    vector<int> dp(n+1,-1);
    return solve(n-1,dp,nums);
}
