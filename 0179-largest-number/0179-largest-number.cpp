class Solution {
public:
// static bool comp(string a, string b){
//     int minLen = min(a.size(), b.size());
//     int i = 0;
//     for(; i<minLen; i++){
//         if(a[i] == b[i]) i++;
        
//         else return a[i] > b[i];
//     }
//     return a.size() > b.size();
// }
//     string largestNumber(vector<int>& nums) {
//         string ans = "";
//         // for(int i=0; i<nums.size(); i++){
//         //     string temp = to_string(nums[i]);
//         //     ans += temp;
//         // }
//         // sort(ans.begin(), ans.end(),comp);
//         // return ans;
//         vector<string> num;
//         for(int i=0; i<nums.size(); i++){
//             num.push_back(to_string(nums[i]));
//         }
//         sort(num.begin(), num.end(), comp);
//         for(auto &n : num){
//             ans += n;
//         }
//         return ans;
//     }

    static bool myFunction(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);
        
        return (s1+s2) > (s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), myFunction);
        
        
        if(nums[0] == 0)
            return "0";
        string result = "";
        for(int i:nums)
            result += to_string(i);
        return result;
        
    }
};