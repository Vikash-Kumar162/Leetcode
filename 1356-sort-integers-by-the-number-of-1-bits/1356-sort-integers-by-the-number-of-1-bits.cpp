class Solution {
public:

static int numSetBits(int n){
    int numberOfSetBits = 0;
    while(n > 0){
        if((n & 1) == 1){
            numberOfSetBits ++;
        }
        n = n >> 1;
    }
    return numberOfSetBits;
}
static bool comp(int a, int b){
    if(numSetBits(a) == numSetBits(b)){
        return a < b;
    }
    else{
        return numSetBits(a) < numSetBits(b);
    }
}
    vector<int> sortByBits(vector<int>& arr) {
        // vector<int> ans;
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};