class Solution {
public:

    int solve(int idx,vector<int>&dp,vector<int>&nums){  //tc:O(n),sc:O(n)

        if (idx==0) return nums[0];
        if (idx==1) return max(nums[0],nums[1]);  //agr do hi ghar huye means 2 idx, 0 and 1 then simply return max of both the houses

        if (dp[idx]!=-1) return dp[idx];

        int take = nums[idx]+solve(idx-2,dp,nums);
        int skip = 0+solve(idx-1,dp,nums);

        return dp[idx] = max(take,skip);


    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return solve(n-1,dp,nums);
    }
};
