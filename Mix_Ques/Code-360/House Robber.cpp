#include <bits/stdc++.h> 

int solve(int idx,vector<int>&dp,vector<int>&nums){  //tc:O(n),sc:O(n)


        if (idx==0) return nums[0];             
        if (idx==1) return max(nums[0],nums[1]);  //simply return max of both 

        if (dp[idx]!=-1) return dp[idx];

        int pick = nums[idx] + solve(idx-2,dp,nums);
        int notPick= 0 + solve(idx-1,dp,nums);

        return dp[idx] = max(pick,notPick);
}

int houseRobber(vector<int>&nums) {
    int n=nums.size();

    vector<int> dp(n+1,-1);

    return solve(n-1,dp,nums);
}
