class Solution {
public: 
    int sumOddLengthSubarrays(vector<int>& arr) {      //tc:O(n),sc:O(1)
        
        int n=arr.size();
        int oddCount =0;
        
        for(int i=0;i<n;++i){

            int currTotalSubarrays = (i+1)*(n-i);             
            //curr idx ke element ko include krke hm kitne subarrays generate krwa skte = (i+1)*(n-i)
            
            int oddSubarrays =(currTotalSubarrays+1)/2;
            oddCount += arr[i]*oddSubarrays;
        }

        return oddCount;
    }
};
