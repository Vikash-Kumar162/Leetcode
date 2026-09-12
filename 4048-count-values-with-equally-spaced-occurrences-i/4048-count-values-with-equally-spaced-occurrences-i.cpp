class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        int count = 0;
        for(auto it : mp){
            auto freqVec = it.second;
            if(freqVec.size() == 3){
                int i1 = freqVec[0], i2 = freqVec[1], i3 = freqVec[2];
                if(i2 - i1  == i3 - i2)
                count ++;
            }
        }
        return count;
    }
};