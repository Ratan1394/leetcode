class Solution {
public:
    int findClosest(int x, int y, int z) {
        int first ;
        int second;
        if(x<=z){
            first=z-x;
        }else if(z<=x){
            first=x-z;
        }
        if(y<=z){
            second=z-y;
        }else if(z<=y){
            second=y-z;
        }

        if(first<second){
            return 1;
        }else if(second<first){
            return 2;
        }
        else{
            return 0;
        }
        
    }
};