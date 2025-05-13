class Solution {
public:
    int search(vector<int>& nums, int target) {   //nums is passed by reference.

// No copy is made — you're working on the original vector directly.

// but if we have use like search(vector<int> nums,int integer) , here a copy would have created of vector which will take time to perform operations on it , like first make copy of vector then do operations so we have used (&) pass by reference concept to reduce time.
 
        long long n = nums.size();
        long long low = 0;
        long long high = n-1;

        while (low<=high){
            long long mid = low + ((high-low)>>1);

            if ( nums[mid] == target ) return mid;

            else if (nums[mid] > target) high = mid -1;

            else low = mid +1;
        }

        return -1;
    }
};
