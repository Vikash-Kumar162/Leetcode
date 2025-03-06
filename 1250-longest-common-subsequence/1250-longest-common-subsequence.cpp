class Solution {
public:
int solveUsingRec(string& s1, string& s2, int i, int j){
    // B. C
    if(i >= s1.size()){
        return 0;
    }
    if(j >= s2.size()){
        return 0;
    }
    int ans=0;
    if(s1[i] == s2[j]){   // Matching
        ans = 1 + solveUsingRec(s1, s2, i+1, j+1);
    }
    else {
        ans = 0 + max(solveUsingRec(s1, s2, i+1, j), solveUsingRec(s1, s2, i, j+1));
    }
    return ans;
}

int solveUsingMem(string& s1, string& s2, int i, int j, vector<vector<int>>& dp){
    // B. C
    if(i >= s1.size()){
        return 0;
    }
    if(j >= s2.size()){
        return 0;
    }

    // If ans Already exist
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans=0;
    if(s1[i] == s2[j]){   // Matching
        ans = 1 + solveUsingMem(s1, s2, i+1, j+1, dp);
    }
    else {
        ans = 0 + max(solveUsingMem(s1, s2, i+1, j, dp), solveUsingMem(s1, s2, i, j+1, dp));
    }
    return dp[i][j] = ans;
}
    int longestCommonSubsequence(string text1, string text2) {
        int i=0, j=0;
        // return solveUsingRec(text1, text2, i, j);

        vector<vector<int>> dp(text1.size()+1, vector<int>(text2.size()+1, -1));
        return solveUsingMem(text1, text2, i, j, dp);
    }
};