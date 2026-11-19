class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int elm1, elm2;
        int count1=0, count2=0;
        for(int i=0;i<n;i++){
            if(count1==0 & nums[i]!=elm2){
                count1=1;
                elm1=nums[i];
            }
            else if(count2==0 & nums[i]!=elm1){
                count2=1;
                elm2=nums[i];
            }else if(nums[i]==elm1){
                count1++;
            }else if(nums[i]==elm2){
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==elm1){
                cnt1++;
            }else if(nums[i]==elm2){
                cnt2++;
            }
        }
        vector<int>ans;
        if(cnt1>n/3){
            ans.push_back(elm1);
        }
        if(cnt2>n/3){
            ans.push_back(elm2);
        }
        return ans;

    }
};