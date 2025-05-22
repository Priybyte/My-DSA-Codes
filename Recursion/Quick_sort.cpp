#include <bits/stdc++.h> 

int partition(vector<int> &arr,int st,int end){

    int idx = st-1,pivot=arr[end];

    for(int j=st;j<end;++j){
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void helperQuicksort(vector<int>&arr,int st,int end){

    if (st>=end) return;

    int pividx = partition(arr,st,end);

    helperQuicksort(arr,st,pividx-1);
    helperQuicksort(arr,pividx+1,end);
}


vector<int> quickSort(vector<int> arr)
{
    helperQuicksort(arr,0,arr.size()-1);
    return arr;                               //return type is vector so have to return arr can't leave it empty
}
