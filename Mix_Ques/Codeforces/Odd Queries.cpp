#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n,m;
        cin >> n>>m;

        vector<ll> v(n);
        for(int i=0;i<n;++i) cin >> v[i];

        vector<ll> pref(n);

        pref[0] = v[0];
        for(int i=1;i<n;++i) pref[i] = pref[i-1] + v[i];

        ll totalSum = pref[n-1];

        while(m>0){               //tc:O(n+m),sc:O(n)

            ll first,second,replace;
            cin >> first >> second >> replace;

            // vector<ll> copy = v;

            // for(int i=first-1;i<=second-1;++i) copy[i] = replace;
            
            // ll ans=0;
            // for(auto&x:copy) ans+=x;

            // if (ans&1) cout << "YES" << endl;
            // else cout << "NO" << endl;

            // m--;

            ll segmentSum =0;
            
            if (first==1) segmentSum = pref[second-1];
            else segmentSum = pref[second-1] - pref[(first-1)-1];

            ll newSum = totalSum - segmentSum + ((second-first+1)*replace);

            if (newSum &1) cout << "YES" << endl;
            else cout << "NO" << endl;

            m--;
        }

    }
    return 0;
}
