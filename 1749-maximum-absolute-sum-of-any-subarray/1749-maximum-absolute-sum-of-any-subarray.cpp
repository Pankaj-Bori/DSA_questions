class Solution {
public:
    int maxsum(vector<int>& nums){
        int be=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            be=max(be+nums[i],nums[i]);
            res=max(res,be);
        }
        return res;
    }

    int minsum(vector<int>& nums){
        int be=nums[0];
        int res=nums[0];

        for(int i=1;i<nums.size();i++){
            be=min(be+nums[i],nums[i]);
            res=min(res,be);
        }
        return res;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int maxs=maxsum(nums);
        int mins=minsum(nums);
        int res=max(abs(maxs),abs(mins));
        return res;
    }
};