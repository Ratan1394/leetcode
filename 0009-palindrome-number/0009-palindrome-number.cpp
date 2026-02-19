class Solution {
public:
    bool isPalindrome(int x) {
        int original  = x;
        long long val = 0;
        

        while( x > 0){
            val = val*10 + (x%10);
            x = x/10;
        }
        if( val == original){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};