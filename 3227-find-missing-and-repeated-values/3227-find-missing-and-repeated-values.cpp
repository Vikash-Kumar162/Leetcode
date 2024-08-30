class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a, b;
        int n = grid.size();
        int sum = 0, totalSum = 0;
        for(int i=1; i<=n*n ; i++){
            totalSum += i;
        }
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mp[grid[i][j]] ++;
                sum += grid[i][j];
            }
        }
        for(auto it : mp){
            if(it.second > 1)
            a = it.first;
            // break;
        }
        b = totalSum - sum + a;
        return {a, b};
    }
};