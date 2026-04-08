class Solution {
public:
    string addBinary(string a, string b) {
        
        int m=a.size()-1;
        int n =b.size()-1;

        int carry=0;

        string s ="";

        while(m>=0 || n>=0){   //tc:O(n),sc:O(1) {auxillary}
            
            int sum=0;

            if (m>=0){
                sum+= a[m]-'0';
                --m;
            }

            if(n>=0){
                sum+=b[n]-'0';
                --n;
            }

            sum +=carry;

            if (sum&1) s+= '1';
            else s+= '0';

            carry = (sum>1) ? 1 : 0;
        }

        if (carry==1) s+='1';

        reverse(s.begin(),s.end());
        return s;

    }
};
