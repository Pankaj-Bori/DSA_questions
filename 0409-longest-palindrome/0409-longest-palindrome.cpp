class Solution {
public:
    int longestPalindrome(string s) {
        //int s=size();
        unordered_map<char,int>f;
        for(auto i:s){
            f[i]++;
        }
        bool odd=false;
        int res=0;
        for(auto i:f){
            int val=i.second;
            if(val%2==0){
                res+=val;
            }else if(val%2==1){
                res+=val-1;
                odd=true;
            }
        }
        if(odd==false){
            return res;
        }
        return res+1;
    }
};