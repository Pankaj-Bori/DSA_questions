class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            if(nums[gues]==target){
                return gues;
            }
            if(nums[gues]>nums[n-1]){
                if(nums[gues]<target){
                    low=gues+1;
                }else{
                    if(nums[0]>target){
                        low=gues+1;
                    }else{
                        high=gues-1;
                    }
                }
                continue;
            }
            if(nums[gues]>target){
                high=gues-1;
            }else{
                if(nums[n-1]<target){
                    high=gues-1;
                }else{
                    low=gues+1;
                }
            }
        }
        return -1;
    }
};