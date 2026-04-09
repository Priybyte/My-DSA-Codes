class Solution {
public:
    int firstUniqChar(string s) {
        
        int n=s.size();

        vector<int> freq (26,0);

        for(auto&x:s) freq[x-'a']++;
        
        int i=0;
        while(i<n){                            //tc:O(n),sc:O(1)
            if (freq[s[i]-'a']==1) return i;
            else ++i;
        }

        return -1;
    }
};
