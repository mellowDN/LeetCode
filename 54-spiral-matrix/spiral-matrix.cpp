class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startRow=0;
        int startCol=0;
        int row= matrix.size()-1;
        int col= matrix[0].size()-1;
        int count=matrix.size()*matrix[0].size();
        int total=0;
        vector<int>nums;
        while(total<count){
            for(int i=startCol; i<=col && total<count; i++){
                nums.push_back(matrix[startRow][i]);
                total++;
            }
            startRow++;
            for(int i=startRow; i<=row && total<count; i++){
                nums.push_back(matrix[i][col]);
                total++;
            }
            col--;
            for(int i=col; i>=startCol && total<count; i--){
                nums.push_back(matrix[row][i]);
                total++;
            }
            row--;
            for(int i=row; i>=startRow && total<count; i--){
                nums.push_back(matrix[i][startCol]);
                total++;
            }
            startCol++;
        }
        return nums;
    }
};