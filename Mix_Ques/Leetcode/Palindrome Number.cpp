class Solution {
public:
    bool isPalindrome(int x) {

        string s = "";

        if (x<0) return false;

        while(x>0){               //tc:O(log num),sc:O(log num)
            int digit = x%10;
            s+= to_string(digit);
            x=x/10;
        }

        int i=0; int j=s.size()-1;

        while(i<=j) {
            if (s[i]!=s[j]) return false;

            ++i;
            --j;
        }

        return true;
    }
};
