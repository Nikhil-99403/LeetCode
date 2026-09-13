class Solution {
public:
    int maxDistinct(string s) {
        int cnt=0;
        unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second>=1){
                cnt++;
            }
        }
        return cnt;

    }
};