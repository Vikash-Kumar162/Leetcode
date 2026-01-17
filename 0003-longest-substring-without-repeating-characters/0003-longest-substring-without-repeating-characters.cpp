class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, n = s.size();
        for(int I=0; I<n; I++){
            unordered_map<char, int> mp;
            for(int j=I; j<n; j++){
                if(mp.find(s[j]) != mp. end()){
                    break;
                }
                else{
                    mp[s[j]] ++;
                }
            }
            int maxi = mp.size();
            maxLen = max(maxLen, maxi);
        }
        return maxLen;
    }
};