class Solution {

    void helpersolve(vector<int>&nums , vector<int> &output,int index,vector<vector<int>>&ans){

        if (index>= nums.size()){
            ans.push_back(output);
            return;
        }

        helpersolve(nums,output,index+1,ans);

        int element = nums[index];
        output.push_back(element);
        helpersolve(nums,output,index+1,ans);
        output.pop_back();                          //while backtracking
    }


public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int> output;
        int index =0;
        helpersolve(nums,output,index,ans);
        return ans;
    }
};
