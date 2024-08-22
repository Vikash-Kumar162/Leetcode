class Solution {
public:
    int findComplement(int num) {
        if(num == 0){
            return 1;
        }
        if(num == 1){
            return 0;
        }

        string s;
        while(num != 0){
            if(num & 1) s = '0' + s;
            else s = '1' + s;

            num = num >> 1;
        }

        int ans = 0;
        int p = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '1'){
                ans += pow(2, p);
            }
            p ++;
        }
        return ans;
    }
};