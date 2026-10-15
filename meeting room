class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int room=0;
        int res=0;
        int i=0;
        int j=0;
        while(i<start.size() && j<end.size()){
            if(start[i]<end[j]){
                room++;
                res=max(res,room);
                i++;
            }else{
                room--;
                j++;
            }
        }
        return res;
    }
};
