#include <bits/stdc++.h> 

void helperbubble(vector<int>&arr,int i,int n){

    if (i==n-1) return;

    for(int i=0;i<n-1;++i){
        if (arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);       //aim is to place largest element at last during 
    }

    helperbubble(arr,i,n-1);
}

void bubbleSort(vector<int>& arr, int n)
{   
        helperbubble(arr,0,arr.size());
}
