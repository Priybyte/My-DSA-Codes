class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int n = accounts.size();

        int maxi=0;
        for(auto& x:accounts){  //tc:O(n*m),sc:O(1)

            int sum =0;

            for(auto&y:x) sum+=y;
            
            maxi=max(maxi,sum);
            
        }
        return maxi;
    }
};
