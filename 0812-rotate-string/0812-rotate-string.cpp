class Solution {
public:
    bool rotateString(string s, string goal) {
        // edge case
        if(s.size() != goal.size()){
            return false;
        }
        int i = 0;
        while(i < s.size()){
            char ch = s.front();
            // s.pop_front();
            s.erase(s.begin());
            s.push_back(ch);
            if(s == goal){
                return true;
            }
            i ++;
        }
        return false;
    }
};