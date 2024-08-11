class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0;
        for(int k=0; k<commands.size(); k++){
            string dir = commands[k];
            if(dir == "RIGHT"){
                j++;
            }
            else if(dir == "LEFT"){
                j--;
            }
            else if(dir == "UP"){
                i--;
            }
            else{
                i ++;
            }
        }
        return ((i * n) + j);
    }
};