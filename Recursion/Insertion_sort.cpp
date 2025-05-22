#include <bits/stdc++.h> 

void helperinsertion(vector<int>&arr, int i , int n){

   if (i==n) return;                 // n isiliye not n-1 coz we want to check n-1 index also 

   int curr = arr[i];
   int prev = i-1;

   while (prev>=0 && arr[prev]>curr) {
         arr[prev+1] = arr[prev];
         prev--;
      }

    arr[prev+1] = curr;

   helperinsertion(arr,i+1,n);
}

void insertionSort(int n,vector<int> &arr){
    helperinsertion(arr,1,arr.size());
}
