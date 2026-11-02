class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=n*m-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            int row=gues/m;
            int col=gues%m;
            if(matrix[row][col]==target){
                return true;
            }else if(matrix[row][col]<target){
                low=gues+1;
            }else{
                high=gues-1;
            }
        }
        return false;
    }
};