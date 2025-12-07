class Solution {
public:
    int countOdds(int low, int high) {
        // int count = 0;
        // while(low <= high){
        //     if(low & 1)
        //     count ++;
        //     low ++;
        // }
        // return count;

        // Optimal
        int count = (high+1)/2 - low/2;
        return count;
    }
};