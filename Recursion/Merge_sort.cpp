void helpermerge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;

    int i=st,j=mid+1;

    while(i<=mid && j<=end){
        if (arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }

        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();++idx){
        arr[idx+st] = temp[idx];
    }
}

void helpermergeSort(vector<int>&arr,int st,int end){
    if (st>=end) return;                           

    int mid = st + ((end-st)>>1);

    helpermergeSort(arr,st,mid);
    helpermergeSort(arr,mid+1,end);

    helpermerge(arr,st,mid,end);
}

void mergeSort(vector < int > & arr, int n) {
    helpermergeSort(arr,0,n-1);
}






















