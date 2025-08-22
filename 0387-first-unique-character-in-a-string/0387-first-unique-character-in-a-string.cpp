class Solution {
public:
    int firstUniqChar(string s) {
        
        for (int i = 0; i <= s.length()-1; i++) {
           bool unique = true;
            for (int j = 0; j <=s.length()-1; j++) {
                if ((s[i] == s[j])  && (i!=j) ) {
                    unique = false;
                    break;
                }
                
            }
            if(unique){
                return i;
            }
        }
        return -1;
    }
};