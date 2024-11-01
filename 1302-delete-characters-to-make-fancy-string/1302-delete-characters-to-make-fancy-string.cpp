class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(i+1 < s.size() && i+2 < s.size() 
            && s[i] == s[i+1] && s[i] == s[i+2]) continue;
            else{
                ans.push_back(s[i]);
            }

        }
        return ans;
    }
};