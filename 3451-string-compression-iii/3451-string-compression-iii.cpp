class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        for(int i=0; i<word.size(); ){
            char ch = word[i];
            int count = 0;
            // int j = i;
            while(i < word.size() && (word[i] == ch) && count < 9){
                count ++;
                i++;
            }
            comp += to_string(count) + ch;
            // i = j;
        }
        return comp;
    }
};