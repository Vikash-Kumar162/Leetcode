class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int arrSize = original.size();
        int totalElements = m * n;
        vector<vector<int>> ans(m, vector<int>(n));
        if(arrSize < totalElements || arrSize > totalElements){
            return {};
        }
        int index = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = original[index++];
            }
        }
        return ans;
    }
};