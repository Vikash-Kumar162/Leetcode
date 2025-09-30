class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> temp;
        for(int num : nums){
            temp.push_back(num);
        }

        while(temp.size() > 1){
            vector<int> sum;
            for(int i=0; i<temp.size()-1; i++){
                int s = temp[i] + temp[i+1];
                s %= 10;
                sum.push_back(s);
            }
            temp = sum;
        }
        int ans = temp[0];
        return ans;
    }
};