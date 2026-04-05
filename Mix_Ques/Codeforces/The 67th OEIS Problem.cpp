#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> allPrimes;

vector<int> sieve(int num){

    vector<bool> isPrime(num+1,true);
    allPrimes.clear();

    for(int i=2;i*i<=num;++i){

        if (isPrime[i]) {
            for(int j=i*i;j<=num;j+=i){
                isPrime[j]=false;
            }
        }
    }

    for(int i=2;i<=num;++i){
        if (isPrime[i]==true) allPrimes.push_back(i); 
    }

    return allPrimes;
}

int main() {
    allPrimes = sieve(200000);    //tc:O(M log log M + T *n),sc:O(M)
  
    ll t;
    cin >> t;
    while(t--){         
        
        ll n;
        cin >> n;

        for(int i=0;i<n;++i){
            cout << (ll)allPrimes[i]*(ll)allPrimes[i+1] << " ";
        }

        cout << endl;

    }
    return 0;
}
