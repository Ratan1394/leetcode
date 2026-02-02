class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minval = 0;
        int sum = 0;
        int startValue = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
            if(sum < minval){
                minval = sum;
            }
        }
        if(minval <= 0){
            startValue = startValue -(minval)+1;
        }

        return startValue;;
    }
};