class Solution {
public:
    int numberOfSubstrings(string s) {
       int r=0; int count=0;
       vector<int> lastSeen(3, -1);
        while(r<=s.size()-1){
          lastSeen[s[r]-'a'] =r;
          if(lastSeen[0]!= -1 && lastSeen[0]!= -1 && lastSeen[0]!= -1) {
            count = count + (1+ min({lastSeen[0] , lastSeen[1] , lastSeen[2]}));
          }
          r++;
        }
        return count;
    }
};