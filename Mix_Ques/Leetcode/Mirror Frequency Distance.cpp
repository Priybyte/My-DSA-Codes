class Solution {
public:
    int mirrorFrequency(string s) {

        int n=s.size();

        vector<int> freq(256,0);               //one stop solution for everything symbols,char,letters etc...

        //pahle hi store krwa lo sabke freq
        for(auto&x:s) freq[x]++;                    //tc:O(n),sc:O(1)

        int sum =0;

        //ab check karo char mirror ki freq 
        for(char c='a';c<='m';++c) {
            char mirror = 'z'-(c-'a');
            sum += abs (freq[c]-freq[mirror]);    
        }

        //check kro dig mirror ki freq
        for(char c='0';c<='4';++c) {
            char mir = '9'-(c-'0');
            sum += abs (freq[c]-freq[mir]);    
        }

        return sum;
    }
};
