#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n;
        cin >> n;
        
        vector<int> v(3*n+1);          //tc:O(n),sc:O(n)

        ll currNum=1;
        for(int i=1;i<=3*n;i+=3){
            v[i] = currNum;
            currNum++;
        }

        for(int i=2;i<=3*n;i+=3){
            v[i] = currNum;
            currNum+=2;
        }

        ll lastNum=3*n;
        for(int i=3*n;i>0;i-=3){
            v[i] = lastNum;
            lastNum-=2;
        }

        for(int i=1;i<=3*n;++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
