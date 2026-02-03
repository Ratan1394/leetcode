class Solution {
public:
    int pivotInteger(int n) {
        int s=0;
        
        int l=0;
        for(int i=0; i<=n;i++){
            s +=i;
           
        }
        for(int i=0; i<=n;i++){
            s = s-i;
            if(s == l){
                return i;
            }
            l+= i;
        }
        return -1;
        
    }
};