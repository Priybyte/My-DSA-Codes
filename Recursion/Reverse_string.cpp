class Solution {
public:

    void helperReverse(vector<char>&s,int i,int j){

        if (i>j) return;

        swap(s[i],s[j]);

        helperReverse(s,++i,--j);
    }


    void reverseString(vector<char>& s) {

       helperReverse(s,0,s.size()-1);
    }
};
