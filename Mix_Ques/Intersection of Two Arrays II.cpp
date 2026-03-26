class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n =nums1.size();        
        int m=nums2.size();            

        vector<int> ans;     

        int i=0,j=0;

        sort(nums1.begin(),nums1.end());         //tc:O(n log n), sc:O(n)
        sort(nums2.begin(),nums2.end());         

        while(i<n && j<m){

            if (nums1[i]==nums2[j]) {
                ans.push_back(nums1[i]);
                ++i;++j;
            }

            else if (nums1[i]<nums2[j]) ++i;

            else ++j;
        }
        return ans;
    }
};
