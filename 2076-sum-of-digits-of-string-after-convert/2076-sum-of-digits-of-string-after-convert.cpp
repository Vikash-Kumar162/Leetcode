class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(int i=0; i<s.size(); i++){
            int val = s[i] - 'a' + 1;
            if(val >= 10){
                num += to_string(val);
            }
            else{
                num += val + '0';
            }
        }
        while(k --){
            int sum = 0;
            for(int i=0; i<num.size(); i++){
                sum += num[i] - '0';
            }
            num = to_string(sum);
        }
        int ans = stoi(num);
        return ans;
    }
};