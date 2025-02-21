class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            // opening brackets
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            // else -> it will be CLOSED BRACKET
            else{
                if(!st.empty()){       // Stack is not empty means atleast 1 opening bracket
                    if(ch == ')' && st.top() == '(')
                    st.pop();
                    else if(ch == '}' && st.top() == '{')
                    st.pop();
                    else if(ch == ']' && st.top() == '[')
                    st.pop();
                    else  // not the above open - close combination  empty
                    return false;
                }
                else{  // stack is empty and ch is closing bracket
                    return false;
                }
            }
        }
        // In last if stack is empty -> return true, otherwise false;
        return st.empty();
    }
};