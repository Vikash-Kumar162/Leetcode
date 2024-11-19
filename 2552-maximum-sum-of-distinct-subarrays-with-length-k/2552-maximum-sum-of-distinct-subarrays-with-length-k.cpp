class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        long long ans = 0;
        long long currWindowSum = 0;

        unordered_set<int> st; // to check for duplicate in subarray

        int i = 0;
        int j = 0;
        while(j < n){
            // check if curr nums[j] is present in subarray from i to j

            // all subarray elements are only present in set

            while(st.count(nums[j])){
                currWindowSum -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            currWindowSum += nums[j];
            st.insert(nums[j]);     // inserting an elem into set i.e into subarr

            if(j-i+1 == k){
                ans = max(ans, currWindowSum);
                currWindowSum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};