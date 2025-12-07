class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0; i<nums.size(); i++){
            bitset<32> binary_representation(nums[i]); 
            string s = binary_representation.to_string();
            s = s.substr(s.find('1'));
            string rev = s;
            reverse(rev.begin(), rev.end());
            int dec = stoi(rev, nullptr, 2);
            pq.push({dec, nums[i]});
        }
        vector<int> ans;
        while(!pq.empty()){
            auto el = pq.top();
            ans.push_back(el.second);
            pq.pop();
        }
       return ans;
    }
};