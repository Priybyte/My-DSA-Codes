class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans=0;
        for(auto&x:nums){ //tc:O(n),sc:O(1)

            // int count=0;
            // while(x>0){
            //     x=x/10;
            //     count++;
            // }

            // if (count%2==0) ans++;

            int digits = log10(x)+1;
            if(digits%2==0) ans++;
        }
        return ans;
    }
};
