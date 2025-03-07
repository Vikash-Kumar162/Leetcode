class Solution {
public:
int solveUsingMem(string &s, int i, int j, vector<vector<int>> &dp){
    // base case
    if(i == j){
        return 1;
    }
    if(i > j){
        return 0;
    }
    
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int ans = 0;
    if(s[i] == s[j]){
        ans = 2 + solveUsingMem(s, i+1, j-1, dp);  // +2 bcz 2 chars are palindrome
    }
    else{
        ans = 0 + max(solveUsingMem(s, i+1, j, dp), solveUsingMem(s, i, j-1, dp));
    }
    return dp[i][j] = ans;
}
    int longestPalindromeSubseq(string s) {
        int i = 0, j = s.size()-1;
        
        // return solveUsingRec(s, i, j);
        
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return solveUsingMem(s, i, j, dp);
    }
};