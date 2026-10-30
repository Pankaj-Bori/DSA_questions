// Given an integer array arr[], which denotes the positions of stalls. All the positions are distinct. There are k aggressive cows.

// Assign the cows to the stalls such that the minimum distance between any two cows is maximized.

// Examples:

// Input: arr[] = [1, 2, 4, 8, 9], k = 3
// Output: 3
// Explanation: The first cow can be placed at arr[0], the second at arr[2], and the third at arr[3]. The minimum distance between any two cows is 3 (between arr[0] and arr[2]), which is the maximum possible among all valid arrangements.
// Input: arr[] = [10, 1, 2, 7, 5], k = 3
// Output: 4
// Explanation: The first cow can be placed at arr[0], the second at arr[1], and the third at arr[4]. In this arrangement, the minimum distance between any two cows is 4 (between arr[1] and arr[4]), which is the maximum possible among all valid arrangements.
// Constraints:

// arr.size() ≤ 106
// 0 ≤ arr[i] ≤ 108
// 2 ≤ k ≤ arr.size()
// Expected Complexities
// Time Complexity: O(n log m)
// Auxiliary Space: O(1)


class Solution {
  public:
    bool fun(vector<int> &arr, int k,int n,int gues){
        int cow=1;
        int pos=arr[0];
        for(int i=0;i<n;i++){
            int dis=arr[i]-pos;
            if(dis<gues){
                continue;
            }
            cow++;
            pos=arr[i];
        }
        if(cow>=k){
            return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=1;
        int high=arr[n-1]-arr[0];
        int res=-1;
        while(low<=high){
            int gues=low+(high-low)/2;
            if(fun(arr,k,n,gues)){
                res=gues;
                low=gues+1;
            }else{
                high=gues-1;
            }
        }
        return res;
    }
};
