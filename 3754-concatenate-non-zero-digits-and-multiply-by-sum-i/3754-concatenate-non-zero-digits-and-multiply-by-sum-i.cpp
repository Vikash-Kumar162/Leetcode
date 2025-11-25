class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n < 10) return n*n;
        
        string s = to_string(n);
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] != '0')
            str += s[i];
        }
        int sum = 0;
        for(int i=0; i<str.size(); i++){
            sum += str[i] - '0';
        }
        int num = stoi(str);
        return (long long)num * sum;
    }
};