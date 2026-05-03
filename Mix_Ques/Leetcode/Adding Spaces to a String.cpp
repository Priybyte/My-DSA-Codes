class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string ans = "";

        int idx =0;

        for(int i=0;i<s.size();++i){     //tc:O(n),sc:O(n)
            if (idx<spaces.size() && i==spaces[idx]) {
                ans += " ";
                ans += s[i];
                idx++;
                
            }

            else ans+=s[i];
        }

        return ans;
    }
};
