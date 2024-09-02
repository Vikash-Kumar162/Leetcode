class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // edge case
        if(k < chalk[0]){
            return 0;
        }
        int n = chalk.size();

        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += chalk[i];
        }
        // update k so that large k will be updated to small -> reduce T.C

        k = k % sum;
        for(int i=0; i<chalk.size(); i++){
            if(k < chalk[i]){
                return i;
            }
            k = k - chalk[i];
            if(i+1 == n){
                i = -1;
            } 
        }
        return -1;
    }
};