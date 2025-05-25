class Solution {
  public:

int getSecondLargest(vector<int> &arr) {
        
        int largest = arr[0],secondlargest=INT_MIN;
        
        bool found = false;
        
        for(int i=1;i<arr.size();++i){
            
            if (arr[i] > largest ) {
                secondlargest = largest;
                largest = arr[i];
                found = true;
            }
            
            else if (arr[i]< largest && arr[i] > secondlargest){
                    secondlargest = arr[i];
                    found = true;
            }
        }
        
        if (!found){
            return  -1;
        }
        
        return secondlargest;
        
    }
    
    
};
