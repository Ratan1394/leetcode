class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        std::vector<int> arr;
        std::vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                arr.push_back(nums[i]);
            }else{
                result.push_back(nums[i]);
            }
        }
        int j=0;
        int i=0;
        while(i < nums.size()){
            nums[i] = result[j];
            i++;
            nums[i] = arr[j];
            j++;
            i++;
        }
        return nums;
    }
};