class Solution {
public:


bool valid(char ch){
    ch=tolower(ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
                return true;
            }else{
                return false;
                }
}
    string reverseVowels(string s) {
        int i=0; int j=s.size()-1;
        while(i<j){
           
                if(!valid(s[i]) ){
                i++;
            }
            
            
            
                if(!valid(s[j]) ){
                j--;
            }
            
            
           
            if(valid(s[i]) == true && valid(s[j]) == true){
            
                    swap(s[i], s[j]);
                i++;
                j--;
            }
            
        }
        return s;
    }
};