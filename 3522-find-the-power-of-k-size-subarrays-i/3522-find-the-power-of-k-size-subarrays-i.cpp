class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return nums;
        }
        if(k == 1){
            return nums;
        }
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int maxi = -1;
            for(int j=i; i+k<=nums.size() &&  j<i+k; j++){
                if(j == i + k - 1 || j == nums.size() - 1){
                    maxi = max(maxi, nums[j]);
                }
                else if(j+1 < nums.size() && 
                (nums[j+1] < nums[j] || nums[j+1]  != nums[j] + 1)){
                    maxi = -1;
                    break;
                }
                else{
                    maxi = max(maxi, nums[j]);
                }
            }
            if(i + k > nums.size()){
                break;
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};