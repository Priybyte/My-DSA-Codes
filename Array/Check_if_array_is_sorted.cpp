class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        
        bool found = true;
        
        for (int i=0;i<arr.size()-1;++i){
            if (arr[i] > arr[i+1]){
                found = false;
                break;
            }
        }
        
        if (found) {
            return true;
        }
        
        return false;
        
    }
};
