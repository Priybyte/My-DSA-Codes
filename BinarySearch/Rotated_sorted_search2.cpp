class Solution {
public:
    bool search(vector<int>& arr, int k) {

        int n = arr.size();
        int low =0;
        int high = n-1;

        while (low<=high){

            int mid = low + ((high-low)>>1);

            if (arr[mid] == k) return true;

            if ( arr[low] == arr[mid] && arr[mid]==arr[high] && arr[high]==arr[low]) { //agr eisa hua,toh trim kr do search space ko
                low = low +1;
                high = high -1;
                continue;
            }

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

        return false;
    }
};
