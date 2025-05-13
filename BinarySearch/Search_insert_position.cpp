class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         long long high =nums.size()-1;
         long long low =0;
         long long ans = nums.size();

         while ( low <= high){

            long long mid = low + ( (high-low)>>1);

            if ( nums[mid] >= target ){
                ans = mid;
                high = mid -1;
            }
            else low = mid+1;
         }

         return ans;
    }
};
