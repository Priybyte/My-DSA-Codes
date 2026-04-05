#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        vector<int> v(7);     //tc:O(1) , sc:O(1)
        for(int i=0;i<7;++i) cin >> v[i];


        ll maxi = *max_element(v.begin(),v.end());
        

        ll idx=-1;
        for (int i=0;i<7;++i) {
            if (v[i]==maxi) {
                idx=i;
                break;
            }
        }

        ll sum =0;
        for(int i=0;i<7;++i) {
            if (i==idx) continue;

            else v[i] = -v[i];
        }


        for(auto&x:v) sum+= x;

        cout << sum << endl;

        
    }
    return 0;
}
