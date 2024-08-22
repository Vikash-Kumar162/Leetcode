class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;

        string s;
        while(n){
            if(n & 1) s = '0' + s;
            else s = '1' + s;

            n = n >> 1;
        }
        int ans = 0;
        int p = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '1') ans += pow(2, p);
            p++;
        }
        return ans;
    }
};