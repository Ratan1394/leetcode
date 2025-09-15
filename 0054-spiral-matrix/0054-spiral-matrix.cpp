class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int count = 0;
        int total = m*n;

        // indexes
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = m-1;
        int endingCol = n-1;

        while(count<total){
            // startingRow
            for(int index = startingCol;count<total && index <= endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }startingRow++;

            // endingCol
            for(int index =startingRow;count<total&& index <= endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }endingCol--;

            // endingRow
            for(int index = endingCol;count<total && index >= startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }endingRow--;

            // startingCol
            for(int index = endingRow;count<total && index >= startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }startingCol++;

        }
        return ans;
    }
};