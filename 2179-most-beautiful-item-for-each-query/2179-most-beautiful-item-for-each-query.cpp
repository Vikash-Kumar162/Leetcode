class Solution {
public:
static bool comp(vector<int> &a, vector<int> &b){
    if(a[0] == b[0]){
        return a[1] < b[1];
    }
    return a[0] < b[0];
}
int binarySearch(vector<vector<int>>& items, int currPrice){
    int maxBeauty = 0;
    int s = 0, e = items.size() - 1;
    while(s <= e){
        int mid = (s + e)/2;
        if(items[mid][0] <= currPrice){
            maxBeauty = max(maxBeauty, items[mid][1]);
            s = mid + 1;
        }
        else if(items[mid][0] > currPrice){
            e = mid - 1;
        }
    }
    return maxBeauty;
}
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans;
        sort(items.begin(), items.end(), comp);

        // update for maxBeauty seen far in the items array
        int maxB = items[0][1];
        for(int i=0; i<items.size(); i++){
            maxB = max(maxB, items[i][1]);
            items[i][1] = maxB; 
        }
        // sort(queries.begin(), queries.end());
        for(int i=0; i<queries.size(); i++){
            int currPrice = queries[i];
            int maxBeauty = binarySearch(items, currPrice);
            ans.push_back(maxBeauty);
        }
        return ans;
    }
};