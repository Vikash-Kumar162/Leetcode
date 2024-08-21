class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return  0;
        }

        int maxLen = 0;
        sort(nums.begin(), nums.end());
        int len = 0;
        for(int i=0; i<nums.size()-1; i++){
            if( nums[i+1] == nums[i] + 1){
                len ++;
                maxLen = max(maxLen, len);
            }
            else if(nums[i+1] == nums[i]){
                continue;
            }
            else{
                len = 0;
            }
        }
        return maxLen + 1;   // + 1 for last element, since last element is not compared
    }
};