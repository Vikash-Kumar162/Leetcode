class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // edge case
        if(nums.size() == 0){
            return 0;
        }
       map<int,int> mp;
       for(int i=0; i<nums.size(); i++){
        mp[nums[i]] ++;
       } 
       vector<int> temp;
       for(auto it : mp){
        int el = it.first;
        temp.push_back(el);
       }

       int maxLen = 0, len = 0;
        for(int i=0; i<temp.size()-1; i++){

            if(temp[i+1] == temp[i] + 1){
                len ++;
                maxLen = max(maxLen, len);
            }
            else{
                len = 0;
            }
        }
        return maxLen + 1;   
    }
};