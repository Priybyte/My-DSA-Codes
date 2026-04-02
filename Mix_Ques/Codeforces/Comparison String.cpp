#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll maxi =0;

        char rightArrow = '>';
        char leftArrow='<';

        ll rightCount=0;
        ll leftCount=0;

        int j=0;

        while(j<n){                           //tc:O(N),sc:O(1)

            while(s[j]==leftArrow) {
                leftCount++;
                ++j;
            }
            maxi= max(leftCount,maxi);
            leftCount=0;

            while(s[j]==rightArrow) {
                rightCount++;
                ++j;
            }
            maxi= max(rightCount,maxi);
            rightCount=0;

        }

        cout << maxi+1 << endl;
        
    }
    return 0;
}
