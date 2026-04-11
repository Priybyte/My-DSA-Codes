class Solution {
public:
    int mySqrt(int x) {

        int low =1; int high =x;
        int ans=-1;

        while(low<=high){   //tc:O(log x),sc:O(1)

            int mid = low + (high-low)/2;

            if ((mid*mid) <= x) {
                ans =mid;
                low = mid+1;
            }

            else high =mid-1;
        }

        return ans;
    }
};
