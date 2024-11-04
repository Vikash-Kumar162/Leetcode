class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        for(int i=0; i<word.size(); ){
            char ch = word[i];
            int count = 0;
            int j = i;
            while(j < word.size() && (word[j] == ch) && count < 9){
                count ++;
                j++;
            }
            comp += to_string(count) + ch;
            i = j;
        }
        return comp;
    }
};