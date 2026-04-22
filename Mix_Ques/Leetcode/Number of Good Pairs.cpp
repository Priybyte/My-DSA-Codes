class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int n = nums.size();

        // int count =0;                //tc:O(n^2),sc:O(1)

        // for(int i=0;i<n-1;++i){
        //     for(int j=i+1;j<n;++j){
        //         if (nums[j]==nums[i] && i<j) count ++;
        //     }
        // }

        // return count;


        unordered_map<int,int> mp;          //tc:O(n),sc:O(n)

        int result =0;

        for(int i=0;i<n;++i){

            if (mp.find(nums[i]) != mp.end()){
                result += mp[nums[i]];
            }

            mp[nums[i]]++;
        }

        return result;
        
    }
};
