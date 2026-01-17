class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxLen = 0, n = s.size();
        int i = 0, j = 0;
        while(j < n){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                int currLen = st.size();
                maxLen = max(maxLen, currLen);
                j++;
            }
            else{
                // Duplicate found
                while(st.find(s[j]) != st.end()){
                    st.erase(s[i]);
                    i++;
                }
            }
        }
        return maxLen;
    }
};