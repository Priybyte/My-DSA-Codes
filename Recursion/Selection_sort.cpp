#include <bits/stdc++.h> 

void helperselection(vector<int>&arr, int i,int n){

    if (i==n-1) return;  //jb i last element ko point krega then ruk jao coz usse aage compare krne ke liye hai hi nhi kuch 

    int start = i;
    for(int j=i+1;j<n;++j){
        if (arr[j] < arr[start]) start=j;         //aim is to find smallest element and placce it at starting
    }

    swap(arr[i],arr[start]);

    helperselection(arr,i+1,n);


}

void selectionSort(vector<int>& arr, int n)
{   
    helperselection(arr,0,arr.size());
}
