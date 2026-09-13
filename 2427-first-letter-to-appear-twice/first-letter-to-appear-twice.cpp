class Solution {
public:
    char repeatedCharacter(string s) {
        int hash[27]={0};
        int i;
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
            if(hash[s[i]-'a']==2){
                return s[i];
                break;
            }
        }

        return s[i];
        
    }
};