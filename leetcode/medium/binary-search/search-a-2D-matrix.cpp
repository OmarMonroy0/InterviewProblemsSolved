class Solution {
public:
    bool searchMatrix(const vector<vector<int>>& matrix,const  int &target) {
        const int n = matrix.size();
        const int m  = matrix[0].size();

        int  lx  = 0;
        const int  ly  = m - 1;
        int rx = n - 1;
        const int ry = m -1;

        while ( lx <= rx){
            int h = lx  + (rx - lx ) / 2;
            if ( matrix[h][ly] < target) lx =  h+1;
            else rx = h-1;
        }
        if ( lx >= n) return false;
    
        int l = 0;
        int r = ry;

        while(l <= r){
            int h  =  l + (r -l ) / 2;
            if (matrix[lx][h] == target) return true;
            else if(matrix[lx][h] < target) l = h+1;
            else r = h-1;
        }
        return false;

    }
};


// [
//     [1,3]
// ]