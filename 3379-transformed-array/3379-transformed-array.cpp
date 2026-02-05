class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            // Positive
            int num = abs(nums[i]);
            int j = i;
            if(nums[i] > 0){
                while(num--){
                    j++;
                    if(j == n){
                        j = 0;
                    }
                }
                ans[i] = nums[j];
            }
            else if(nums[i] < 0){
                while(num--){
                    j--;
                    if(j == -1){
                        j = n-1;
                    }
                }
                ans[i] = nums[j];
            }
            else{
                ans[i] = nums[i];
            }
        }
        return ans;
    }
};