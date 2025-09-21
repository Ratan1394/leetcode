
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer = {};
        
        
        for(int i=1; i<=n;i++){
            
            if(i%3==0 && i%5==0){
                answer.push_back("FizzBuzz");
                continue;
            }
            if(i%3==0 && i%5!=0){
                answer.push_back("Fizz");
                continue;
            }
             if(i%5==0 && i%3!=0){
                answer.push_back("Buzz");
                continue;
            }
              if(i%3!=0 && i%5!=0){
                answer.push_back(std::to_string(i));
            }
        }
        return answer;
    }
};