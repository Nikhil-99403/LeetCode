class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=0;i<nums.size();i+=2){
            v.push_back(nums[i+1]);
            v.push_back(nums[i]);
        }
        return v;
    }
};