class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n=nums.size();
       int zero=0;
       int one=0;
       int res=0;
       unordered_map<int,int>f;
       for(int i=0;i<n;i++){
        if(nums[i]==0){
            zero++;
        }else{
            one++;
        }
        int dif=zero-one;
        if(dif==0){
            res=max(res,i+1);
            continue;
        }
        if(f.find(dif)==f.end()){
            f[dif]=i;
        }else{
            int idx=f[dif];
            int len=i-idx;
            res=max(res,len);
        }
       }
       return res; 
    }
};