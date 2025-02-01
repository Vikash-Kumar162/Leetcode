class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            if((nums[i] & 1) & (nums[i+1] & 1)){
                return false;
            }
            else if(!(nums[i] & 1) & !(nums[i+1] & 1)){
                return false;
            }
        }
        return true;
    }
};