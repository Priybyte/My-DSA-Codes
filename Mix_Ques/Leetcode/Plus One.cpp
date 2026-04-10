class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n =digits.size();

        int i=n-1;
        while(i>=0){   //tc:O(n),sc:O(1)

            if (digits[i]<9) {
                digits[i]+=1;
                return digits;
            }

            digits[i]=0;
            --i;
        }

        digits.insert(digits.begin(),1);  //this will only take O(n) time to insert
        return digits;
    }
};
