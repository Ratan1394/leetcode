class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k)-atmost(nums, k-1);
    }
    int atmost(vector<int>& nums, int k){
        if (k < 0) return 0;
        int l=0; int r=0; int sum=0; int count=0;
        while(r<nums.size()){
            sum = sum+ nums[r]%2;

            while(sum>k && l<=r){
                sum = sum-nums[l]%2;
                l++;
            }
            count = count + r-l+1;
            r++;
        }
        return count;
    }
};