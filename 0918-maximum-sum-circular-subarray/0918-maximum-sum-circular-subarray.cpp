class Solution {
public:
    int maxs(vector<int>& nums){
        int ans=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            ans=max(ans+nums[i],nums[i]);
            res=max(res,ans);
        }
        return res;
    }
    int mins(vector<int>& nums){
        int ans=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            ans=min(ans+nums[i],nums[i]);
            res=min(res,ans);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int maxi=maxs(nums);
        int mini=mins(nums);
        if(maxi<0){
            return maxi;
        }
        int res=sum-mini;
        return max(maxi,res);

    }
};