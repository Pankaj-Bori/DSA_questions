class Solution {
public:
    int firstIdx(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int res=-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            if(nums[gues]<target){
                low=gues+1;
            }else if(nums[gues]>target){
                high=gues-1;
            }else{
                res=gues;
                high=gues-1;
            }
        }
        return res;
    }

    int lastIdx(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int res=-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            if(nums[gues]<target){
                low=gues+1;
            }else if(nums[gues]>target){
                high=gues-1;
            }else{
                res=gues;
                low=gues+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstIdx(nums,target);
        if(first==-1){
            return {-1,-1};
        }
        int last=lastIdx(nums,target);

        return {first,last};
    }
};