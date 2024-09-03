class Solution {
public:
bool isEvenDigSum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return (sum % 2 == 0);
}
    int countEven(int num) {
        int i = 2, count = 0;
        while(i <= num){
            if(isEvenDigSum(i)) count ++;
            i++;
        }
        return count;
    }
};