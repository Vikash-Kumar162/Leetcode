class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int> mp;
        for(int i=0; i<banned.size(); i++){
            mp[banned[i]] ++;
        }

        int maxSelected = 0, sum = 0;
        for(int i=1; i<=n; i++){
            if(sum > maxSum){
                break;
            }
            if(mp.find(i) == mp.end()){
                sum += i;
                if(sum <= maxSum)
                maxSelected++;
            }
        }
        return maxSelected;
    }
};