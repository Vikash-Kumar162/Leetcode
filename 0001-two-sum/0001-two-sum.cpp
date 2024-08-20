class Solution {
public:
static bool comp(pair<int,int>& a, pair<int,int>& b){
    return a.first < b.first;
}
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> data;
        // vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            int index = i;
            data.push_back({val, index});
        }
        // custom sort
        sort(data.begin(), data.end(), comp);

        int s = 0, e = data.size()-1;
        while(s < e){
            int sum = data[s].first + data[e].first;
            if(sum == target){
                // ans.push_back(data[s].second);
                // ans.push_back(data[e].second);
                // break;
                return {data[s].second, data[e].second};
            }
            else if(sum < target)
            s ++;
            else
            e--;
        }
        return {};
    }
};