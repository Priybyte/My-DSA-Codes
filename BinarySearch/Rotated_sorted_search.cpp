class Solution {
public:
    int search(vector<int>& arr, int k) {
        
        int n = arr.size();
        int low =0;
        int high = n-1;

        while (low<=high){

            int mid = low + ((high-low)>>1);

            if (arr[mid] == k) return mid;

            // left sorted hai y nhi
            if ( arr[low] <= arr[mid]){
                if ( arr[low] <= k && k <= arr[mid]){  // ky left wale me ly krta hai
                    high = mid -1;                    // hn krta hai
                }

                else low = mid +1;       // nhi krta
            }

            else { //right sorted 

                if (arr[mid] <= k && k <= arr[high]){      //right wale me ly krte hai
                    low = mid +1;                   // hn krta hai
                }
                                              
                else high = mid-1;               // nhi krta
            }
        }

        return -1;
    }
};
