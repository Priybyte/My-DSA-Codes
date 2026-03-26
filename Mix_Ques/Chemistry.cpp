#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    ll t;
    cin >> t;
    while(t--){         //tc:O(n), sc:O(1) storing at most 26char
        
        ll n,k;
        cin>>n>>k;

        string s;
        cin >>s;

       unordered_map<char,int> mp;

       for(auto&it:s){
            mp[it]++;
       }

       ll count =0;

       for(auto&x:mp){

            if (x.second &1) count++; //checking odd condition
       }

       if (count>k+1) cout << "NO" << endl;
       else cout << "YES" << endl;
        
    }
    return 0;
}
