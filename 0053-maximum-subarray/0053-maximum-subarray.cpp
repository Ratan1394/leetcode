class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        int sum = 0;
        int maxsum = -10000;
        for (int i = 0; i < nums.size(); i++) {
            // sum = sum + nums[i];
             
             sum = max( nums[i], sum + nums[i]);
            // if (sum < 0) {
            //     sum = 0;
            // }

            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};