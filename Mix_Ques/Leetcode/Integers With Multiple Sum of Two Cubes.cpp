class Solution {
public:
#define ll long long 
    
    vector<int> findGoodIntegers(int n) {

        map<ll,ll> mp;

        //tc:O(n^2/3 log m) log m for inserting into ordered map
        //sc:O(n^2/3)
        
        for(int i=1;i<=1000;++i){           
            for(int j=i;j<=1000;++j){

                ll currSum = (ll)i*i*i+ (ll)j*j*j;
                
                if (currSum<=n) {
                    mp[currSum]++;
                }

                else break;     //taki hum unnecessary conditions check na kare aur time save kare
            }
        }

        vector<int> v;
        
        for(auto& it:mp){
            if (it.second>=2) v.push_back(it.first);
        }

        return v;
    }
};
