class Solution {
public:
    int findComplement(int num) {
        // int numBits = (int)(log2(num)) + 1;
        // for(int i=0; i<numBits; i++){
        //     num = num ^ (1 << i);
        // }
        // return num;

        // Approach 2

        int numBits = (int)(log2(num)) + 1;
        unsigned int mask = (1U << numBits) - 1;   // gives 2^n-1 as 0111 & then do xor

        return num ^ mask;
    }
};