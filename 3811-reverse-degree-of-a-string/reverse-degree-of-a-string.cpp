class Solution {
public:
    int reverseDegree(string s) {
        int result=0;
        for(int i=0;i<s.length();i++){
            char a=s[i];
            int val=26-(a-'a');
            result+=val*(i+1);
        }
        return result;

    }
};