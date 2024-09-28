class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<string> temp;
        for(int i=0; i<nums.size(); i++){
            temp.push_back(to_string(nums[i]));
        }
        long long mini = INT_MAX;
        for(int i=0; i<temp.size(); i++){
           
            string num = temp[i];
            long long sum = 0;
            int j = 0;
            while(j < num.size()){
                sum = sum + (num[j] - '0');
                j++;
            }
            mini = min(mini, sum);
        }
        return mini;
    }
};