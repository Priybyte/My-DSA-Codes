class Solution {
public:

  void  helperbubble(vector<int>& nums, int i,int j){ 
        if (i>j) return;

        for (int i=0;i<nums.size()-1;++i){                           //aim is to place largest element at last 
            if (nums[i] > nums[i+1]) swap(nums[i],nums[i+1]);
        }

        return helperbubble(nums,i,j-1);
    }

    void sortColors(vector<int>& nums) {
        return helperbubble(nums,0,nums.size()-1);
    }
};
