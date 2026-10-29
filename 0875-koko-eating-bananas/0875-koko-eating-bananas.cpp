class Solution {
public:
    long long fun(vector<int>& piles, int n,int speed){
        long long h=0;
        for(int i=0;i<n;i++){
            h=h+piles[i]/speed;
            if(piles[i]%speed!=0){
                h++;
            }
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     int n=piles.size();
     int low=1;
     int high=*max_element(piles.begin(),piles.end());
     int res=-1;
     while(low<=high){
        int gues=low+(high-low)/2;
        long long hours=fun(piles,n,gues);
        if(hours>h){
            low=gues+1;
        }else{
            res=gues;
            high=gues-1;
        }
     }
     return res;   
    }
};