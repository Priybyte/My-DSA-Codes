#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n;
        cin >> n;
        
        int i=1;
        ll count =0;
        while(i<=n) {           //tc:O(n),sc:O(1)
            if (n%i==0) {
                count++;
                ++i;
            }

            else break;
        }

        cout << count << endl;
    }
    return 0;
}
