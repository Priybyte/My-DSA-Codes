class Solution {
public:

    int solve(int idx,vector<int>&dp,vector<int>&cost){  //tc:O(n),sc:O(n)

        if (idx<0) return 0; // agr idx<0 toh simply 0 return karao
        if(idx==0) return cost[0]; //if idx==0 hua then take 0th index cost and return 

        if (dp[idx]!=-1) return dp[idx];

        int skip2 = cost[idx] + solve(idx-2,dp,cost);
        int skip1 = cost[idx] + solve(idx-1,dp,cost);

        return dp[idx] = min(skip2,skip1);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n+1,-1);

        return min(solve(n-1,dp,cost),solve(n-2,dp,cost));  // dono paths se dekhna hoga ki kisme se min cost aa rha
    }
};
