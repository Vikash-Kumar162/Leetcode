class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] ++;
        }
        int ans = 0;
        int n = nums.size();
        for(auto it : mp){
            if(it.second > n/2)
            ans = it.first;
        }
        return ans;
    }
};