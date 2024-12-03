class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        unordered_map<int,int> mp;
        for(int i=0; i<spaces.size(); i++){
            mp[spaces[i]] ++;
        }
        string res = "";
        
        for(int i=0; i<s.size(); i++){
            // if i found in map -> insert firstly space then char at i
            if(mp.find(i) != mp.end()){
                res += ' ';
                
            }
            
                res += s[i];

        }
        return res;
    }
};