class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=0;
        int res=0;
        while(high<n){
            if(nums[high]==1){
                int len=high-low+1;
                res=max(res,len);
            }else{
                low=high+1;
            }
            high++;
        }
        return res;
    }
};