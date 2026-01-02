class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int repeated = -1;
        for(int i=0; i<nums.size()-1; i++){
           if(nums[i] == nums[i+1]){
            repeated = nums[i];
            break;
           }
           
        }
        return repeated;
    }
};