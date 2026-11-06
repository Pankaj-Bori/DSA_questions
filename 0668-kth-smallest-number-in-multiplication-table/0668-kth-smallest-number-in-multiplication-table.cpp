class Solution {
public:
    int fun(int m,int n,int gues){
        int row=n;
        int col=1;
        int count=0;
        while(row>=1 & col<=m){
            if(row*col<=gues){
                count=count+row;
                col++;
            }else{
                row--;
            }
        }
        return count;
    }
    int findKthNumber(int m, int n, int k) {
        int low=1;
        int high=m*n;
        int res=-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            int ans=fun(m,n,gues);
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