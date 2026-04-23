class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        int n=arr.size();

        // for(int i=0;i<n;++i){
        //     for(int j=0;j<n;++j){
        //         if (arr[i]==2*arr[j] && i!=j) return true;
        //     }
        // }
        // return false;

        unordered_set<int>st;  

        for(auto&x:arr){ // tc:O(n),sc:O(n)

            if(st.count(x*2) || (x%2==0&& st.count(x/2))) return true;
            st.insert(x);
        }

        return false;
    }
};
