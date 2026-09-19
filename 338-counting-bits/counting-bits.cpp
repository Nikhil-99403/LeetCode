class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> c;
        for(int i = 0; i <= n; i++) {
            string res;
            if(i == 0) {
                c.push_back(0);
            }
            else {
                int x = i;
                while(x > 0) {
                    if(x % 2 == 1)
                        res += '1';
                    else
                        res += '0';

                    x = x / 2;
                }
                int cnt = 0;
                for(char x : res) {
                    if(x == '1')
                        cnt++;
                }
                c.push_back(cnt);
            }
        }
        return c;
    }
};