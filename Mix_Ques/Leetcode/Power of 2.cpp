class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if (n<=0) return false;         //tc:O(1),sc:O(1)
        return (n & (n-1))==0;
    }
};
