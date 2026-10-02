class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<int>res;
        
        while(k>0){
            int maxf=0;
            int maxelement=0;
             for(auto it:freq){
                if(it.second>maxf){
                    maxf=it.second;
                    maxelement=it.first;
                }
            }
            res.push_back(maxelement);
            freq.erase(maxelement);
            k--;
        }
        return res;
     
    }
};