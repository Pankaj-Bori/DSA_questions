class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete=arr[0];
        int onedelete=INT_MIN;
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            int prenodelete=nodelete;
            int preonedelete=onedelete;
            nodelete=max(nodelete+arr[i],arr[i]);
            int v;
            if(onedelete==INT_MIN){
                v=arr[i];
            }else{
                v=preonedelete+arr[i];
            }
            onedelete=max(v,prenodelete);
            res=max(res,max(nodelete,onedelete));
        }
        return res;
    }
};