// Input : 
// nums = [12,14,16,2,4,6,8,10]
// target  = 14

// Output :
// 1

class Solution {
public:

    int findPivot(vector<int>& nums) {
        int n = nums.size();
        int startingEle = 0;
        int e = n-1;
        int mid = startingEle + (e-startingEle) / 2;

        while(startingEle <= e) {
            if(startingEle == e) {
                // ARRAY HAS SINGLE ELEMENT 
                return startingEle;
            }
            if(mid + 1 < n && nums[mid] > nums[mid+1]) {
                return mid;
            }
            else if(mid - 1 >= 0 && nums[mid] < nums[mid-1]) {
                return mid - 1;
            }
            // NOW CHECK WHETHER MY ELE IS ON A-PART OR B-PART
            else if(nums[startingEle] > nums[mid]) {
                // YOU ARE ON B-PART
                // GO LEFT 
                e = mid - 1;
            }
            else {
                // YOU ARE ON A-PART
                // GO RIGHT WITHIN A-PART
                startingEle = mid + 1;
            }
            mid = startingEle + (e-startingEle) / 2;
        }
        return -1;
    }
    int binarySearch(vector<int>& nums, int s, int e, int target) {
        int mid = s + (e-s) / 2;
        while(s <= e) {
            if(nums[mid] == target) {
                return mid;
            }
            else if(target > nums[mid]) {
                // go right
                s = mid+1;
            }
            else {
                // go left
                e = mid -1;
            }
            
            // UPDATE MID
            mid = s + (e-s) / 2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);
        int n = nums.size();
        int ans = -1;

        //SEARCH IN A PART
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            ans = binarySearch(nums,0,pivotIndex,target);
        }
        // SEARCH IN B PART
        // else if(target >= nums[pivotIndex+1] && target <= nums[n-1])
        // or simply
        else {
            ans = binarySearch(nums,pivotIndex+1,n-1,target);
        }

        return ans;
    }
};
