class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0, n = s.size();
        for(int I=0; I<n; I++){
            set<char> st;
            for(int j=I; j<n; j++){
                if(st.find(s[j]) != st. end()){
                    break;
                }
                else{
                    st.insert(s[j]);
                }
            }
            int maxi = st.size();
            maxLen = max(maxLen, maxi);
        }
        return maxLen;
    }
};