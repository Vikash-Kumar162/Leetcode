class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num2 < 100){
            return 0;
        }
        int count = 0;
        for(int num=num1; num<=num2; num++){
            string s = to_string(num);
            for(int i=1; i<s.size()-1; i++){
                int currDig = s[i] - '0';
                int prevDig = s[i-1] - '0';
                int nextDig = s[i+1] - '0';
                if(currDig > prevDig && currDig > nextDig){
                    count ++;
                }
                else if(currDig < prevDig && currDig < nextDig){
                    count ++;
                }
            }
        }
        return count;
    }
};