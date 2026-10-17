class Solution {
public:
    char repeatedCharacter(string s) {
        int n=s.size();
        unordered_map<char,int>f;
        for(int i=0;i<n;i++){
            f[s[i]]++;
            if(f[s[i]]==2){
                return s[i];
            }
        }
        // for(int i=0;i<n;i++){
        //     if(f[s[i]]==2){
        //         return s[i];
        //     }
        // }
        return -1;
    }
};