// APPROACH :  SEARCH SPACE MINIMIZATION

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.

// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., 

class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;
        long long int mid = s + (e-s) / 2;

        while(s<=e) {
            // kya mid hi toh ans nahi dost?
            if(mid*mid == x) return mid;


            else if(mid*mid < x) {
                // ans store pehle fir
                // right me jao
                ans = mid;
                s = mid + 1;
            }
            else {
                // left me jao
                e = mid - 1;
            }
            mid = s + (e-s) / 2;
        }
        return ans;
    }
};

// similar question
// question 2 : Valid Perfect Square

// Example 1:
// Input: num = 16
// Output: true
// Explanation: We return true because 4 * 4 = 16 and 4 is an integer.

// Example 2:
// Input: num = 14
// Output: false
// Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.

//  Given a positive integer num, return true if num is a perfect square or false otherwise.

class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 0;
        int e = num;
        int ans = -1;
        long long int mid = s + (e-s) / 2;

        while(s<=e) {
            
            if(mid*mid == num) return true;


            else if(mid*mid < num) {
                // ans store pehle fir
                // right me jao
                ans = mid;
                s = mid + 1;
            }
            else {
                // left me jao
                e = mid - 1;
            }
            mid = s + (e-s) / 2;
        }
        return false;
    }
};
