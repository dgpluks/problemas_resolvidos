class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0;
        while(s[i] == '1' && s[i] != '\0'){
            i++;
        }
        if(s[i] == '\0')
            return 1;
        else{
            while(s[i] == '0' && s[i] != '\0'){
                i++;
            }
            if(s[i] == '\0')
                return 1;
            else
                return 0;
        }
    }
};
