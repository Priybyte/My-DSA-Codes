class Solution {
public:

int firstOccurance(vector<int>& arr, int target){

    int n = arr.size();
    int high =n-1;
    int low =0;
    int first = -1;

    while(low<=high){

        int mid = low + ((high-low)>>1);

        if ( arr[mid] == target ){
            first = mid;
            high = mid -1;
        }

        else if ( arr[mid] < target){
            low = mid +1;
        }

        else high = mid -1;
    }

    return first;
}

int lastOccurance(vector<int>& arr, int target){

    int n = arr.size();
    int high =n-1;
    int low =0;
    int last = -1;

    while(low<=high){

        int mid = low + ((high-low)>>1);

        if ( arr[mid] == target ){
            last = mid;
            low = mid+1;
        }

        else if ( arr[mid] < target ){
            low = mid +1;
        }

        else high = mid -1;
    }

    return last;
}
vector<int> searchRange(vector<int>& arr, int target) {
    int first = firstOccurance(arr, target);
    int last = lastOccurance(arr, target);
    return {first,last};
    }
};
