class Solution {
public:
vector<int> nextPermutationAns(vector<int>& nums) {
       int index = -1;
      int n = nums.size();
      // 1 find dip point 
      for(int i=n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
      }  
      // if index = -1 reverse of nums will be ans -> sorted in reverse order

      if(index == -1){
        reverse(nums.begin(), nums.end());
        return nums;
      }
      // 2 find someone just greater than dip 
      for(int i=n-1; i>index; i--){
        if(nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
      }
      reverse(nums.begin() + index + 1, nums.end());
      return nums;
}
    void nextPermutation(vector<int>& nums) {
        
    nums = nextPermutationAns(nums);
    }
};