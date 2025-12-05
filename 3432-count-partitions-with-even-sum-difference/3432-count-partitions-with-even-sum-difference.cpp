class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0, rightSum = 0, count = 0;
        for(int i=0; i<nums.size()-1; i++){
            leftSum += nums[i];
            rightSum = totalSum - leftSum;
            if(abs(rightSum - leftSum) % 2 == 0)
            count ++;
        }
        return count;
    }
};