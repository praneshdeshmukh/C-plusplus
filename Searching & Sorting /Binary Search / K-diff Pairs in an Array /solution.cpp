// Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

// A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:
// ==========================================================================================
// Example 1:

// Input: nums = [3,1,4,1,5], k = 2
// Output: 2
// Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
// Although we have two 1s in the input, we should only return the number of unique pairs.

// Example 2:

// Input: nums = [1,2,3,4,5], k = 1
// Output: 4
// Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).

// Example 3:

// Input: nums = [1,3,1,5,4], k = 0
// Output: 1
// Explanation: There is one 0-diff pair in the array, (1, 1).

//===================================================================== 
// NOTE - return only DISTINCT no. of pairs
// DISTINCT ==> using "SET of PAIR type" datastructure!
// set<pair<int,int>> varibleName

class Solution {
public:

    // APPOROACH 1 - better than binarySearch approach
    int twoPointers(vector<int>&nums, int k) {
    // 2 POINTER APPROACH

        sort(nums.begin(), nums.end());

        // only distinct pairs no duplicate
        // So using "SET" of "PAIR" datastructure
        set<pair<int,int>>ans;
        int i=0, j=1;

        while(j < nums.size()) {
            int diff = nums[j] - nums[i];
            if(diff == k) {
                // only distinct pairs
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff > k) {
                // shrink the difference
                i++;
            }
            else {
                // grow the difference
                j++;
            }
            // special case when i & j at some same index
            if(i == j) {
                // grow the difference
                j++;
            }
        }
        return ans.size();
    }
// ==============================================================================
   
// APPROACH 2 - not better than two pointer approach
    int bs(vector<int>& nums, int start, int target) {
        int end = nums.size()-1;
        int mid = start+(end-start)/2;

        while(start <= end) {
            if(nums[mid] == target) {
                return mid;
            }
            else if(target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start+(end-start)/2;
        }
        return -1;
    }

    int binarySearch(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;
        for(int i=0; i< nums.size(); i++) {
            if( bs(nums, i+1, nums[i] + k) != -1) {
                ans.insert({nums[i], nums[i]+k});
            }
        }
        return ans.size(); 
    }
// ===================================================================================
int findPairs(vector<int>& nums, int k) {
        int ans;
    // TWO POINTERS APPROACH
        // ans = twoPointers(nums,k);
        // return ans;

    // BINARY SEARCH APPROACH
        ans = binarySearch(nums,k);
        return ans;

    }
};
