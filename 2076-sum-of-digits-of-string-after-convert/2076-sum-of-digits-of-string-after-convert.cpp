class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(int i=0; i<s.size(); i++){
            int val = s[i] - 'a' + 1;
            num += to_string(val);
        }
        while(k --){
            int sum = 0;
            for(int i=0; i<num.size(); i++){
                sum += num[i] - '0';
            }
            num = to_string(sum);
        }
        return stoi(num);
    }
};