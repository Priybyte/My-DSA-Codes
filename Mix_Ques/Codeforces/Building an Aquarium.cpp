#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool canSatisfy(ll mid,vector<int>&v,ll x){      //// tc :O(n*log(1e18)) ≈ O(n) , sc :O(n)

        ll sum=0;
        for(auto&it:v){
            if (mid>it) sum+= (mid-it);  
            if (sum>x) return false;        //return from here to overcome overflow
        }

        return true;
}

int main() {
    
    ll t;
    cin >> t;
    while(t--){
        
        ll n,x;
        cin>>n>>x;

        vector<int> v(n);
        for(int i=0;i<n;++i) cin>>v[i];

        // ll small=*min_element(v.begin(),v.end());
        // ll large=*max_element(v.begin(),v.end());

        ll low =0;
        ll high =1e18;      // to overcome overflow
        ll maxi=0;

        while(low<=high){

            ll mid = low+(high-low)/2;

            if (canSatisfy(mid,v,x)){
                maxi = max(maxi,mid);
                low=mid+1;
            } 

            else high =mid-1;
 
        }

        cout << maxi << endl;
    

    }
    return 0;
}
