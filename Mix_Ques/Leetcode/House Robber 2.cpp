class Solution {
public:

    int solve(int start,int idx,vector<int>&dp,vector<int>&nums){  //tc:O(n),sc:O(n)

        if (idx==start) return nums[start];    
        if (idx==start+1) return max(nums[start],nums[start+1]); 
        //same logic as house robber but we are not restricting to start to 0 and start+1 to 1 , coz from 1->n-1 start and idx will change 

        if (dp[idx]!=-1) return dp[idx];

        int take = nums[idx] + solve(start,idx-2,dp,nums);
        int skip = 0 + solve(start,idx-1,dp,nums);

        return dp[idx] = max(take,skip);
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();

        if (n==1) return nums[0];
        if (n==2) return max(nums[0],nums[1]);

        vector<int>dp1(n+1,-1);  
        vector<int>dp2(n+1,-1);

        return max(solve(0,n-2,dp1,nums),solve(1,n-1,dp2,nums));  
    }
};
