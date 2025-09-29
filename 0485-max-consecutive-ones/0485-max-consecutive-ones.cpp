class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int l=0;  int r=0; int len=0; int  maxLen=0;
    while(r<nums.size()){
        if(nums[r]==1){
            len= r-l+1;
           
        }
        if(nums[r]==0){
            len=0;
            l = r+1;
           
        }
        r++;
        maxLen = max(maxLen,len);

    }
    return maxLen;
    }
};