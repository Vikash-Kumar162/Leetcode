class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> ans(n, vector<int>(n, 0)) ;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                ans[i][j] = matrix[j][i];
            }
        }
        for(int i=0; i<ans.size(); i++){
            reverse(ans[i].begin(), ans[i].end());
        }
        matrix = ans;
    }
};