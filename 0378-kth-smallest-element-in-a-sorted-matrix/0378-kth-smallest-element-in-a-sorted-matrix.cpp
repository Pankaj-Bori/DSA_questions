class Solution {
public:
    int fun(vector<vector<int>>& mat,int n,int m,int gues){
        int row=n-1;
        int col=0;
        int count=0;
        while(row>=0 & col<m){
            if(mat[row][col]<=gues){
                count=count+row+1;
                col++;
            }else{
                row--;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        int low=mat[0][0];
        int high=mat[n-1][m-1];
        int res=-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            int ans=fun(mat,n,m,gues);
            if(ans<k){
                low=gues+1;
            }else{
                res=gues;
                high=gues-1;
            }
        }
        return res;
    }
};