class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, 
        greater<pair<int,int>>>pq;

        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i], i});
        }
        // now logic
        long long score = 0;
        while(! pq.empty()){
            auto it = pq.top();
            pq.pop();
            int index = it.second;
            if(nums[index] != -1){
                score += it.first;
                if(index-1 >= 0){
                    nums[index-1] = -1;
                }
                if(index+1 < nums.size()){
                    nums[index+1] = -1;
                }
            }
        }
        return score;
    }
};