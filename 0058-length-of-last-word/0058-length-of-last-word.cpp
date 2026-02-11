class Solution {
public:
    int lengthOfLastWord(string s) {
        int maxlen=0;
        int length = 0;
        for(int i = 0;i<s.size();i++){
             length++;
            if(s[i] == ' '){
                length = 0;
            }
           
            if(length > 0){
                maxlen = length;
            }
            
            
        }
        return maxlen;
    }
};