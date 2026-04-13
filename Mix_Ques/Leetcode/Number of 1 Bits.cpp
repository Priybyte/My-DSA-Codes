class Solution {
public:
    int hammingWeight(int n) {

            int count =0;    
            while (n>0){     //tc:O(32),sc:O(1)
                n = n & (n-1);
                count++;
            }

            return count;
    }
};
