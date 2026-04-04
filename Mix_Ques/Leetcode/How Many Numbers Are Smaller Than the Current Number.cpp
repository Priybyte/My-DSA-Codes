class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,int> mp;

        for(auto&x:nums) mp[x]++;

        vector<int> v;

        for(int i=0;i<n;++i) {           //tc:O(n^2),sc:O(n)

            int currGreater =0;
            for(auto&it:mp){
                if (nums[i]>it.first) currGreater+= it.second;
            }

            v.push_back(currGreater);
        }

        return v;
    }
};
