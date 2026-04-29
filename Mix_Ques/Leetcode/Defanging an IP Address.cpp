class Solution {
public:
    string defangIPaddr(string address) {
        
        int n =address.size();

        string ans="";

        for(auto&it: address){      //tc:O(n),sc:O(n)
            if (it=='.') ans+= "[.]";
            else ans.push_back(it);
        }

        return ans;
    }
};
