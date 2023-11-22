// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

// Example 1:
// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2

// Example 2:
// Input: nums = [3,3,7,7,10,11,11]
// Output: 10


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s +(e-s)/2;

        while(s<=e) {
            if(s == e) {
                return nums[s];
            }

            if(mid & 1) // odd element
            {
                // left me jao
                if(nums[mid-1] == nums[mid]) {
                    s = mid + 1;
                }
                else {
                    e = mid - 1;
                }
            }
            else {
                // even element
                // right me jao
                if(nums[mid+1] == nums[mid]) {
                    // to avoid mid+1 wale ele ki duplicate checking
                    // mid+2 kr rha hu
                    // baki mid+1 se bhi ans aa jayega leking ek element
                    // do baar check ho jayega aur kuch nai
                    s = mid+2;
                }
                // ya toh main right part pe khada hu
                // ya toh main ans pe hi hu
                // thats why e=mid kr rha hu
                // kyunki e=mid-1 se ans lost ho sakta hai
                else {
                    e=mid;
                }
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
};
