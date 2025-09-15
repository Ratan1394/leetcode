class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int start = 0;
        int end = r*c - 1;
        int mid = start + (end-start)/2;

        while(start<=end){

            int element  = matrix[mid/c][mid%c];
            if(element == target){
                return true;
            }
            else if(element < target){
                start = mid+1;
            }
            else if(element > target){
                end = mid-1;
            }
             mid = start + (end-start)/2;
        }
        return false;
        
    }
};