class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> q;

        
        int row=points.size();
        for(int i=0; i<row; i++){
            int x=points[i][0];
            int y=points[i][1];
            q.push({(x*x + y*y), {x,y}});
        }

        // Now traverse on pq & find ans

        vector<vector<int>> ans;
        int i=0;
        while(i < k){
            vector<int>temp=q.top().second;
            ans.push_back(temp);
            q.pop();
            i++;
        }
        return ans;
    }
};