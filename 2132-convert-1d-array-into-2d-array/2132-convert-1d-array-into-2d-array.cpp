class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // edge case 
        if(m * n != original.size()) return {};

        vector<vector<int>> matrix(m, vector<int>(n));
        for(int i=0; i<original.size(); i++){
            int row = i / n;
            int col = i % n;
            matrix[row][col] = original[i];
        }
        return matrix;
    }
};