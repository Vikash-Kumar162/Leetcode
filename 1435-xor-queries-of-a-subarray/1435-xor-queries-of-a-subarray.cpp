class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        for(int i=0; i<queries.size(); i++){
            int start = queries[i][0];
            int end = queries[i][1];
            int el = 0;
            for(int j = start; j<=end; j++){
                el ^= arr[j];
            }
            ans.push_back(el);
        }
        return ans;
    }
};