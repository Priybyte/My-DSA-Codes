#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;

    while(t--){  //tc:O(n),sc:O(n)
        
        ll a,b,n;
        cin>>a>>b>>n;

        ll v[n];
        for(int i=0;i<n;++i) cin >> v[i];

        ll ans =b;
        
        for(int i=0;i<n;++i) ans+= min(v[i]+1,a);
        cout << ans -n << endl;
    }
    return 0;
}
