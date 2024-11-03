class Solution {
public:
    bool rotateString(string s, string goal) {
        // edge case
        if(s.size() != goal.size()){
            return false;
        }
        int i = 0;
        while(i < s.size()){
            rotate(s.begin(), s.begin()+1, s.end());
            if(s == goal) return true;
            i ++;
        }
        return false;
    }
};