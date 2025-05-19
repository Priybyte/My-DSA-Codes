class Solution {
public:

bool helperpalindrome(string &s,int i,int j){

        if (i>j) return true;

        if (s[i] != s[j]) return false;

        return helperpalindrome(s,i+1,j-1);
    }

    bool isPalindrome(string s) {

        string empty = "";

        for (char c:s){
            if (isalnum(c)) empty += tolower(c);
        }

        return helperpalindrome(empty,0,empty.size()-1);
    }
};
