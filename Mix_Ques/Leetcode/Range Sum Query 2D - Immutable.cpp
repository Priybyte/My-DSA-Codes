class NumMatrix {
public:
    int n,m;
    vector<vector<int>> pref;

    NumMatrix(vector<vector<int>>& mat) {          //tc:O(n*m),sc:O(1)

        n=mat.size();  //row
        m=mat[0].size(); //col
        
        pref = vector<vector<int>>(n, vector<int>(m, 0));

        pref[0][0] = mat[0][0];

        //1st pref row build krte hai
        for(int i=0;i<1;++i){
            for(int j=1;j<m;++j){
                pref[i][j] = pref[i][j-1] + mat[i][j];
            }
        }

        //ab 1st pref col build krte hai
        for(int j=0;j<1;++j){
            for(int i=1;i<n;++i){
                pref[i][j] = pref[i-1][j]+mat[i][j];
            }
        }

        // ab baki bache cells         
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                pref[i][j] = pref[i][j-1] + pref[i-1][j]+ mat[i][j] - pref[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {

        
        int total = pref[row2][col2];

        int top = (row1> 0) ? pref[row1-1][col2] : 0; //base condition check
        int left = (col1> 0) ? pref[row2][col1-1] : 0;
        int top_left = (row1>0 && col1 >0) ? pref[row1-1][col1-1] : 0;
        int ans = total - top- left+ top_left;

        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
