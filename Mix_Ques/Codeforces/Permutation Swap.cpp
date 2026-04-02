#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n;
        cin >> n;

        ll g =0;
        
        int v[n];
        for(int i=0;i<n;++i) {         //tc:O(n log(min(a,b)) , sc:O(n)
            cin>>v[i];
            
            ll currDiff = abs(v[i]-(i+1));

            if (currDiff!=0) g= __gcd(g,currDiff);
            
        }

        cout << g << endl;
    }
    return 0;
}
