class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int cnt = 0;
        string res = "";
        int n = indices.size();

        while(cnt < n) {
            for(int i = 0; i < n; i++) {
                if(cnt == indices[i]) {
                    res += s[i];
                    cnt++;
                    break;
                }
            }
        }

        return res;
    }
};