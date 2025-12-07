class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, 
                   greater<pair<int,int>>> pq;

    for(int i = 0; i < nums.size(); i++){
        
        bitset<32> binary_representation(nums[i]); 
        string s = binary_representation.to_string();

        // Remove leading zeros
        s = s.substr(s.find('1'));

        string rev = s;
        reverse(rev.begin(), rev.end());

        // Convert reversed binary to int safely
        long long dec = 0;
        for (char c : rev) {
            dec = dec * 2 + (c - '1' + 1);   // dec = dec * 2 + (c == '1');
        }

        // Store reflection + original number for tie-breaking
        pq.push({(int)dec, nums[i]});
    }

    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);  // return original number
        pq.pop();
    }

    return ans;
    }
};