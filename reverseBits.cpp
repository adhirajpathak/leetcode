/*
Input: 00000010100101000001111010011100
Output: 00111001011110000010100101000000
Explanation: The input binary string 00000010100101000001111010011100 
represents the unsigned integer 43261596, 
so return 964176192 which its binary representation is 00111001011110000010100101000000.
*/


class Solution {
public:
   uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        uint32_t mask = 1;
        for (int i=0; i<32; i++) {
            if (n & mask) 
                res = res + 1;
            if (i != 31) 
                res <<= 1;
            mask <<= 1;
        }
        return res;
    }
};