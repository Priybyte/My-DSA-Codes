class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k% nums.size();                      //taki K range me rahe for edge cases
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }  
};
