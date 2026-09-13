class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        int max=0;
        for(auto it:mp){
            if(it.first==it.second){
                if(max<it.first){
                    max=it.first;
                }
            }
        }
        if(max==0) return -1;
         return max;
         
    }
};