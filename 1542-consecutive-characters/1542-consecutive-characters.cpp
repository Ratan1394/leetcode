class Solution {
public:
    int maxPower(string s) {
        int l=0; int r=l+1;  int len=1; int maxlen=1;

        while(r<s.size()){
            if(s[r]==s[l]){
                len++;
                maxlen=max(maxlen,len);
                r++;
            }
            else {
                len=1;
                l=r;
                r++;
            }
            
        }
        return maxlen;
    }
};