class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
return atmost(nums, k)-atmost(nums,k-1);

    }
        int atmost(vector<int>& nums, int k){
        int l=0; int  r=0; int count=0; map<int,int> map; int sum=0;
        while(r<nums.size()){
            map[nums[r]]++;
            while(map.size()>k){
                map[nums[l]]--;
                
                if(map[nums[l]]==0){
                    map.erase(nums[l]);
                }
                l++;
               
                
            }
            
                count = count+(r-l+1);
            
            r++;
        }
        return count;
    }
};