class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxPoints = INT_MIN;
        int sum = 0;
        for(int i=0; i<k; i++){
          sum += cardPoints[i];
        }
        maxPoints = max(maxPoints, sum);
        int l = k - 1, r = cardPoints.size()-1;
        while(l >= 0){
          sum -= cardPoints[l--];
          sum += cardPoints[r--];
          maxPoints = max(maxPoints, sum);
        }
        return maxPoints;
    }
};