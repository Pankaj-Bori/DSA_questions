class Solution {
public:
    bool fun( unordered_map<char,int>need,unordered_map<char,int>have){
        for(auto i:need){
            char c=i.first;
            int fneed=i.second;
            int fhave=have[c];
            if(fneed>fhave){
                return false;
            }
        }
        return true;
    }
    bool canConstruct(string ransomNote, string magazine) {
        int m=magazine.size();
        int n=ransomNote.size();
        unordered_map<char,int>have;
        for(int i=0;i<m;i++){
            have[magazine[i]]++;
        }
        unordered_map<char,int>need;
        for(int i=0;i<n;i++){
            need[ransomNote[i]]++;
        }
        return fun(need,have);
    }
};