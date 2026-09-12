class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        a=nums1;
        for(int x:nums2){
            a.push_back(x);
        }
         sort(a.begin(), a.end());
        int n=a.size();
        if(n%2==0){
            double res=(a[n/2]+a[n/2-1])/2.0;
            return res;

        }
        else return a[n/2];
        
    }
};