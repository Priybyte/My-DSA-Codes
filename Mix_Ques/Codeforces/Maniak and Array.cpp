#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0;i<n;++i) cin >> v[i];         //tc:O(n),sc:O(n)

        ll maxi =0;

        //fix first element
        for(int i=1;i<n;++i) maxi= max(maxi,(ll)v[i]-v[0]);

        //fix last element
        for(int i=n-2;i>=0;--i) maxi = max(maxi,(ll)v[n-1]-v[i]);

        //rotate all
        for(int i=0;i<n-1;++i) maxi= max(maxi,(ll)v[i]-v[i+1]);

        cout << maxi << endl;
    }
    return 0;
}
