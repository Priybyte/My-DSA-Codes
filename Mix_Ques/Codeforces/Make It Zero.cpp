#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n;
        cin >> n;

        int v[n];
        for(int i=0;i<n;++i) cin >> v[i];

        if (n&1) {      //checking odd 

            cout << 4 << endl;
            cout << 1 << " " << n-1<< endl;
            cout << 1 << " " << n-1<< endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;
        }

        else {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }

    }
    return 0;
}
