class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();

        int i = 0, j = 0;
        while(i<m && j<n){
            // str1[i] == str2[j] or str1[i]+1 = str[j] or z->a = str1[i]-25 = str2[j]
            if(str1[i] == str2[j] || 
               str1[i]+1 == str2[j] || 
               str1[i]-25 == str2[j]){
                j++;
            }
            i++;
        }
        return j == str2.size(); // j == n means all char of str2 matched
    }
};