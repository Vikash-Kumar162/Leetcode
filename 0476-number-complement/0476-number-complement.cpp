class Solution {
public:
    int findComplement(int num) {
        // int numBits = (int)(log2(num)) + 1;
        // for(int i=0; i<numBits; i++){
        //     num = num ^ (1 << i);
        // }
        // return num;

        // Approach 2

        // int numBits = (int)(log2(num)) + 1;
        // unsigned int mask = (1U << numBits) - 1;   // gives 2^n-1 as 0111 & then do xor

        // return num ^ mask;

        // Approach 3

        int i = 0;
        int complement = 0;
        while(num){
            if(! (num & 1)){   // if last bit (ith bit) of num is 0, 
            //then flip ith to 1 , else it's already 0, nothing to do
                complement |= (1 << i);
            }

            num >>= 1;
            i++;
        }
        return complement;
    }
};