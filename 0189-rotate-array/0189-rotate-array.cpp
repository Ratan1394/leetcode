class Solution {
public:

void Rotate(vector<int>& nums, int start, int end){
    while(start<end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {
        if(k==0){
            return;
        }
        int size = nums.size();
        
                 k = k%size;
           
        Rotate(nums, 0, size-k-1);
        // if(size%2==0 && k != size){
            Rotate(nums, size-k,size-1);
        // }else{
            // Rotate(nums,k+1, size-1);
        // }
        
        Rotate(nums,0, size-1);
    }
};