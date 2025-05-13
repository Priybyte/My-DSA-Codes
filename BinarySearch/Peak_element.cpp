class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n =nums.size();
        int high = n-2;                             //high and low value very imp
        int low =1;                                 

         if (n==1) return 0;                        // 3 edge cases handeling

        if (nums[0]>nums[1]) return 0;

        if (nums[n-2] < nums[n-1]) return n-1;

        while (low<=high){

            int mid = low + ((high-low)>>1);

            if (nums[mid] > nums[mid-1] && nums[mid]>nums[mid+1] ) return mid;

            else if ( nums[mid] < nums[mid+1]){
                low = mid +1;
            }

            else {
                high = mid -1;
            }
        }

        return -1;
    }
};
