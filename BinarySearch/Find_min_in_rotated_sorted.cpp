class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int high =n-1;
        int low =0;
        int ans = INT_MAX;

        while (low<=high){

            int mid = low + ((high-low)>>1);

            if (arr[low] <= arr[high]) {      // agr already sorted hai
                if (arr[low]<ans){
                    ans = arr[low];
                }
                break;
            }

            if ( arr[low] <= arr[mid]){     //left sorted
                if (arr[low]<ans){
                    ans = arr[low];
                }                           // sorted half may contain ans,toh usko store karo 
                low = mid +1;               // and trim the left half,move to right
            }

            else {                          //right sorted
                if (arr[mid]<ans){
                    ans = arr[mid];
                }                           // sorted half may contain ans,toh usko store karo 
            
                high = mid -1;              // and trim the right half,move to left
            }

        }
         
         return ans ;
    }
};
