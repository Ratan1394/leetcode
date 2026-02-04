
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int sum2 =0;
        int totalsum = 0;
        int maxsum = INT_MIN;
        int minsum = INT_MAX;
        int n = nums.size();
       
        for(int i =0; i<n;i++){
            totalsum += nums[i];

            sum += nums[i];
            maxsum = max(maxsum, sum);
            if(sum < 0){
                sum =0;
            }

            sum2 += nums[i];
           minsum = min(minsum, sum2);
            if(sum2 > 0){
                sum2 =0;
            }
           
           
            
        }
         if (totalsum == minsum) {
            return maxsum  ;
        }
        return  max( maxsum , totalsum - minsum); ;
    }
};