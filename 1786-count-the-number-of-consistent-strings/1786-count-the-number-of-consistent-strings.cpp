class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int consistent = 0;
        for(int i=0; i<words.size(); i++){
            string word = words[i];
            bool found = true;
            for(int j=0; j<word.size(); j++){
                if((allowed.find(word[j])) == string::npos){
                    found = false;
                    break;
                }
            }
            if(found == 1){
                consistent ++;
                // cout<<consistent<<endl;
            }
        }
        return consistent;
    }
};