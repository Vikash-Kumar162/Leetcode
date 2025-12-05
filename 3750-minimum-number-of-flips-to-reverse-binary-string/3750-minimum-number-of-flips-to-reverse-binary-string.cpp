class Solution {
public:
    int minimumFlips(int n) {
        bitset<32> binary_representation(n);
        string s = binary_representation.to_string();
        string rev = s;
        reverse(rev.begin(), rev.end());

        int i = 0;
        while(i<s.size() && s[i] == '0'){
            i++;
        }

        int j = 0, count = 0;
        while(i < s.size()){
            if(s[i] != rev[j]){
                count ++;    
            }
            i++;
            j++;
        }

        return count;
    }
};