class Solution {
public:
    string clearDigits(string s) {
       stack<char> st;
       string ans = "";
       for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            st.push(s[i]);
        }
        else{   // digit hoga -> remove first left char which should be at top of stack
            st.pop();
        }
       }
       while(!st.empty()){
        ans += st.top();
        st.pop();
       } 
       reverse(ans.begin(), ans.end());
       return ans;
    }
};