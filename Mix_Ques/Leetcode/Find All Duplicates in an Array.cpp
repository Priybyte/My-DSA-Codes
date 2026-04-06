class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n=nums.size();

        vector<int> ans;                 

        for (int i=0;i<n;++i){         //tc:O(n),sc:O(1)

            int num = abs(nums[i]);    //abs coz idx can't be negative

            int idx = num-1;

            if (nums[idx]<0) ans.push_back(num);

            nums[idx] = -nums[idx];
        }

        return ans;


    }
};
