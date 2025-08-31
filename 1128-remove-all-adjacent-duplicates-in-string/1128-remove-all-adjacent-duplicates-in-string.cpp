class Solution {
public:
    string removeDuplicates(string s) {
        if (s.size() < 2) return s;      // handle empty / single-char strings

        size_t i = 0;
        while (i + 1 < s.size()) {       // safe boundary check
            if (s[i] == s[i + 1]) {
                s.erase(i, 2);           // erase two chars at index i
                i = 0;                   // restart scanning from beginning
            } else {
                ++i;
            }
        }
        return s;
    }
};



// class Solution {
// public:
//     string removeDuplicates(string s) {
//         for(int i = 0; i<s.length()-1; i++){
//             if(s[i] == s[i+1]){
//                 // s.erase(s[i], s.length());
//                 // s.erase(s[i+1], s.length());
//                 s.erase(i, 2);
//                 i = 0;
//                 // s[i] = s[i-2];
//             }else {
//                 i++;
//             }
//             }
            
        
//      return s ;  
//     }
    
// };