class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        for(int i=0; i<s1.size(); ){
            int j=i; 
            while(j<s1.size() && s1[j] != ' ') j++;
            string word = s1.substr(i, j-i);
            i = j + 1;
            
            mp[word] ++;
        }
        for(int i=0; i<s2.size(); ){
            int j=i; 
            while(j < s2.size() && s2[j] != ' ') j++;
            string word = s2.substr(i, j-i);
            i = j + 1;
            mp[word] ++;
        }
        vector<string> ans;
        for(auto it : mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};