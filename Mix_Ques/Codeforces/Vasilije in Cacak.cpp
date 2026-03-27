#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){      //tc:O(k),sc:O(1)
        
        ll n,k,x;
        cin >> n>>k>>x;

        ll minkSum = (k*(k+1))/2;

        ll maxkSum =0;
        int i=n;
        while(k>0){
            maxkSum += i;
            --i;
            --k;
        } 

        if (x>= minkSum && x<=maxkSum) cout << "YES" << endl;  //agr x dono ke range ke andr hai toh yes else no
        else cout << "NO" << endl;
        
    }
    return 0;
}
