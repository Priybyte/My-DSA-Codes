#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--) // Added the loop for test cases
	{
		long long n, k;
		cin >> n >> k; 
		vector<long long> a(n);                //sc:O(n)
		for (int i = 0; i < n; i++) 
			cin >> a[i];

		sort(a.begin(), a.end());  //tc:(n log n) 

		long long counter = 1; 
		long long largest_length = 1; 
		
		for (int i = 1; i < n; i++) { // Added missing opening brace here
			if (a[i] - a[i - 1] <= k) {
				counter++; 
			} else {
				counter = 1; // Reset the sequence length
			}
			// Update the largest sequence length found
			largest_length = max(largest_length, counter);
		} // This closing brace now properly matches the for loop

		// Output the minimum number of problems to remove
		cout << n - largest_length << endl;
	}
	return 0;
}
