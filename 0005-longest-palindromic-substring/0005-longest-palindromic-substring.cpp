class Solution {
public:
bool isPalindrome(string &s, int i, int j){
    while(i <= j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
        // brute force
        int start = 0, maxLen = INT_MIN;
        int n = s.size();

        string res = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isPalindrome(s, i, j)){
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        start = i;
                    }
                }
            }
        }
        return res = s.substr(start, maxLen);
    }
};