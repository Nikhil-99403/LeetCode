class Solution {
public:
    int minPartitions(string n) {
        int maxx=0;
        for(auto it:n){
            if(maxx<it){
                maxx=max(maxx,it-'0');
            }
        }
        return maxx;
    }
};
