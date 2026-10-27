class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int res=-1;
        while(low<=high){
            int peak=low+(high-low)/2;
            if(arr[peak]<arr[peak+1]){
                low=peak+1;
            }else{
                res=peak;
                high=peak-1;
            }
        }
        return res;
    }
};