class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int ans =0;

        for(int i=0;i<operations.size();++i){ //tc:O(n),sc:O(1)
            if (operations[i]=="--X" || operations[i]=="X--") ans-=1;
            else ans+=1;
        }
        return ans;
    }
};
