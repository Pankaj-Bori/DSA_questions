class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        //int res=-1;
        while(low<high){
            int peak=low+(high-low)/2;
            if(nums[peak]>nums[high]){
                low=peak+1;
            }else{
                high=peak;
               // high=peak-1;
            }
        }
        return nums[low];
    }
};