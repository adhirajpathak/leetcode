/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
*/

class Solution {
public:
    int reverse(int x) {
        bool neg = false;
        if(x < 0) {
            neg = true;
            x *= (unsigned int)-1;
        }
        
        long rev = 0;
        
        while(x>0) {
            rev = (rev*10) + (x%10);
            x /= 10;
        }
        if(rev > INT_MAX) {
            return 0;
        }
        
        return neg ? (int)(-1 * rev) : (int)(rev);
    }
};