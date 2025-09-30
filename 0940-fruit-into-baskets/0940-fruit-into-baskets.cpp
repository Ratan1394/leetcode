class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;  int r=0;  int maxlen=0;  
        std::map<int, int> map;
        while(r<fruits.size()){
            map[fruits[r]]++;
           
                if(map.size() > 2){
                    map[fruits[l]]--;
                    if(map[fruits[l]]==0){
                        map.erase(fruits[l]);
                    }
                    l++;
                    // r++;
                    //  map[fruits[r]]++;
                
            }
            if(map.size() <= 2){
                maxlen = max(maxlen, r-l+1);
                 
            }
           r++;
        }
        return maxlen;
        
    }
};