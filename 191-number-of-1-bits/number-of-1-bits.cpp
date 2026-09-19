class Solution {
public:
    int hammingWeight(int n) {
        string res="";
        int cnt=0;
        while(n>0){
            if(n%2==1){
                res+='1';
            }
            else {res+='0';}
            n=n/2;
        }
        for(char x:res){
            if(x=='1'){
                cnt++;
            }
        }
        return cnt;
    }
};