class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans = 0;
        for(int i=0; i<s.size(); i++){
        int zeroCount = 0, oneCount = 0;
            for(int j=i; j<s.size(); j++){
                if(s[j] == '0'){
                        zeroCount ++;
                }
                if(s[j] == '1'){
                    oneCount ++;
                }
                if(zeroCount <= k || oneCount <= k){
                    ans ++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};