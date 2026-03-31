class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();

        int i=0;int j=n-1;

        while(i<=j){  //tc:O(n);sc:O(1)

            if (nums[i]+nums[j]==target) return {i+1,j+1};  //1 based indexing

            else if (nums[i]+nums[j]>target) --j;

            else ++i;
        }

        return {};
    }
};
