class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Striver Approach 
        vector<int> hash(256, -1);

        int maxLen = 0;

        int i = 0, j = 0, n = s.size();
        while(j < n){
            if(hash[s[j]] != -1){  // found in map
                if(hash[s[j]] >= i)
                i = hash[s[j]] + 1; 
            }
            int len = j - i + 1;
            maxLen = max(maxLen, len);
            hash[s[j]] = j;
            j++;
        }
        return maxLen;
    }
};