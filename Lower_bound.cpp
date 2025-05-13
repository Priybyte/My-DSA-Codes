int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here

	long long high =n-1;
	long long low = 0;
	long long ans = arr.size();

	while (low<=high){

		long long mid = low + ( (high - low)>>1);

		if ( arr[mid] >= x ) {
			ans = mid;
			high = mid -1;
		}
		

		else low = mid + 1;
	}

	return ans;
}
