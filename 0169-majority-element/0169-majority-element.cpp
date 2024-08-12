class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int>count;
        // for(int i=0; i<nums.size(); i++){
        //     int element=nums[i];
        //     count[element]++;
        // }
        // int ans=0;
        // for(auto i:count){
        //     if(i.second > nums.size()/2)
        //     ans= i.first;
        // }
        // return ans;

        // USING MOORE'S VOTING ALGORITHM

        int el;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i] == el){
                cnt ++;
            }
            else{
                cnt --;
            }
        }

        int cnt1=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == el)
            cnt1 ++;
        }
        if(cnt1 > (nums.size()/2)){
        return el;
        }
        return -1;
    }
};