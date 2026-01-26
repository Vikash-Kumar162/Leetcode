class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        for(int i=0; i<arr.size()-1; i++){
            minDiff = min(minDiff, abs(arr[i] - arr[i+1]));
        }

        cout<<minDiff<<endl;

        vector<vector<int>> ans;
        int i = 0, j = 1;
        while(j < arr.size()){
            if(abs(arr[i] - arr[j]) == minDiff){
                ans.push_back({arr[i], arr[j]});
                j++;
            }
            else if(abs(arr[i] - arr[j]) < minDiff){
                j ++;
            }
            else{
                i ++;
            }
        }
        return ans;
    }
};