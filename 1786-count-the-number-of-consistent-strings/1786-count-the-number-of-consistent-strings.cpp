class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // Using Bit Manipulation

        int mask = 0;  // 00000000....0000
        for(char &ch : allowed){
            mask |= (1 << (ch - 'a'));
        }
        int count = 0;
        for(string &word : words){
            bool allCharPresent = true;
            for(char &ch : word){
                if(((mask >> (ch - 'a')) & 1) == 0){
                    allCharPresent = false;
                    break;
                }
            }
            if(allCharPresent){
                count ++;
            }
        }
        return count;
    }
};