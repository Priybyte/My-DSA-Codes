#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr) {
        int n = arr.size();
        int high =n-1;
        int low =0;
        int ans = INT_MAX;
        int idx = -1;

        while (low<=high){

            int mid = low + ((high-low)>>1);

            if (arr[low] <= arr[high]) {      // agr already sorted hai
                if (arr[low]<ans){
                    ans = arr[low];
                    idx = low;
                }
                break;
            }

            if ( arr[low] <= arr[mid]){     //left sorted
                if (arr[low]<ans){
                    ans = arr[low];
                    idx = low;
                }                           // sorted half may contain ans,toh usko store karo 
                low = mid +1;               // and trim the left half,move to right
            }

            else {                          //right sorted
                if (arr[mid]<ans){
                    ans = arr[mid];
                    idx = mid;
                }                           // sorted half may contain ans,toh usko store karo 
            
                high = mid -1;              // and trim the right half,move to left
            }

        }
         
         return idx ;
}
