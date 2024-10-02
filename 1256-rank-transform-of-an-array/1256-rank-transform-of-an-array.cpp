class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int,int> mp;
        int cnt = 1;
        for(int i=0; i<temp.size(); i++){
            if(mp.find(temp[i]) == mp.end()){
                mp[temp[i]] = cnt++;
            }
        }
        vector<int> ans;
        for(int i=0; i<arr.size(); i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};