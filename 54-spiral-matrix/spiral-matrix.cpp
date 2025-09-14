class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startRow=0;
        int startCol=0;
        int maxRow= matrix.size()-1;
        int maxCol= matrix[0].size()-1;
        int total= matrix.size()*matrix[0].size();
        int count=0;
        vector<int> nums;
        while(count< total){
            for(int i= startCol; i<=maxCol && count<total; i++){
                nums.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow; i<=maxRow && count<total; i++){
                nums.push_back(matrix[i][maxCol]);
                count++;
            }
            maxCol--;
            for(int i=maxCol; i>=startCol && count<total; i--){
                nums.push_back(matrix[maxRow][i]);
                count++;
            }
            maxRow--;
            for(int i=maxRow; i>=startRow && count<total; i--){
                nums.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return nums;
    }
};