## ADAVANCE QUESTION ON BINARY SEARCH - 01

// Given two integers dividend and divisor, divide two integers 
// without using multiplication, division, and mod operator.

// Return the quotient after dividing dividend by divisor.


// --------------------------------------------------------------------

// Example 1:

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333.. which is truncated to 3.

// --------------------------------------------------------------------
// Example 2:

// Input: dividend = 7, divisor = -3
// Output: -2
// Explanation: 7/-3 = -2.33333.. which is truncated to -2.

// --------------------------------------------------------------------

class Solution {
public:

    int divide(int dividend, int divisor) {
        long  s = 0;
        long  e = abs(dividend);
        long  mid = s + (e-s)/2;
        long  ans = -1;


        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        while(s<=e) {

            if(abs(mid * divisor) == abs(dividend)) {
                ans = mid;
                break;
            }
            else if(abs(mid * divisor) < abs(dividend)) {
                // ans store kro
                // right me jao
                ans = mid;
                s = mid + 1;
            }
            else {
                // matlab
                // mid*divisor > dividend
                // left me jao
                e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
            ans = 0 - ans;
            return ans;
        }
        else{
            return ans;
        }
       
    }
};
