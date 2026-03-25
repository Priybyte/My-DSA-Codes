#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {              //tc:O(1), sc:O(1)
    
    ll t;
    cin >> t;
    while(t--){
      
        ll a,b;
        cin >> a>>b;

        ll xk,yk;
        cin >> xk>>yk;

        ll xq,yq;
        cin >> xq>>yq;

            vector<pair<ll,ll>> dir = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};       //vector me lo only pair me lene se err , coz pair sirf 1 pair store krta hai

        set<pair<ll,ll>> kingSet;
        set<pair<ll,ll>> queenSet;

        for(auto&d:dir){       //run for 8times

            ll x =xk+d.first;
            ll y =yk+d.second;

            kingSet.insert({x,y});

            ll m =xq+d.first;
            ll n =yq+d.second;

            queenSet.insert({m,n});
        }

        ll count=0;
        for(auto&x:kingSet){     //run for 8times

            if (queenSet.find(x) != queenSet.end()) count++;
        }

        cout << count << endl;


    }
    return 0;
}
