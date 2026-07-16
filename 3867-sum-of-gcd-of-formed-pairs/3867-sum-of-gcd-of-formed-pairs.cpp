class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mxiPrev = -1;
        for(int i=0; i<nums.size(); i++){
            int mxi = max(mxiPrev, nums[i]);
            mxiPrev = mxi;
            int currentGcd = gcd(mxi, nums[i]);
            prefixGcd.push_back(currentGcd);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int s = 0, e = prefixGcd.size() - 1;
        long long sum = 0;
        while(s < e){
            sum += gcd(prefixGcd[s], prefixGcd[e]);
            s++;
            e--;
        }
        return sum;
    }
};