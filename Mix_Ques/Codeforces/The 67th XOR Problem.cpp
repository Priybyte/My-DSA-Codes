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
        for(int i=0;i<n;++i) cin >> v[i];

        int maxi=0;
        for(int i=0;i<n;++i){     //tc:O(n^2),sc:O(n)
            for(int j=i+1;j<n;++j){
                maxi=max(maxi,v[i]^v[j]);
            }
        }

        cout << maxi << endl;
    }
    return 0;
}
