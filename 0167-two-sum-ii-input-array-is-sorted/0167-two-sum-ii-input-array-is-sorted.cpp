class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;;
     int count = 0;
        while(i<j){
            count = numbers[i] + numbers[j];
            if(count == target){
                break;
            }
            if(count > target){
                count = count - numbers[j];
                j--;
                
            }else{
                i++;
            }
        }
        return {i+1, j+1}; ;
    }
};