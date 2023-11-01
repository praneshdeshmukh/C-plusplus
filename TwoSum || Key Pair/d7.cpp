// LC 
// 167. Two Sum II - Input Array Is Sorted

// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 < numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

// ----------------------------------------------------------
// Example 1:

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
// ----------------------------------------------------------
// Example 2:

// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
// ----------------------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

			int n = numbers.size();
      // sort(numbers.begin(), numbers.end());
	    
	    int left = 0;
	    int right = n-1;
	    
	    while(left <= right) {
	        int xsum = numbers[left] + numbers[right];
	        
	        if(xsum == target) {
               break;
	        }
	        else if(xsum > target) {
	            right--;
	        }
	      
	       else if(xsum < target) {
	            left++;
	       }
	      
	    }
	    
	    
	    vector<int>ans; 
			ans.push_back(left+1);
			ans.push_back(right+1);
			return ans;    
    }
};

// ----------------------------------------------------------

// Gg

// Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

// Example 1:

// Input:
// N = 6, X = 16
// Arr[] = {1, 4, 45, 6, 10, 8}
// Output: Yes
// Explanation: Arr[3] + Arr[4] = 6 + 10 = 16
// ----------------------------------------------------------
// Example 2:

// Input:
// N = 5, X = 10
// Arr[] = {1, 2, 4, 3, 6}
// Output: Yes
// Explanation: Arr[2] + Arr[4] = 4 + 6 = 10
// ---------------------------------------------------------
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
  
  //// METHOD 1 - O(nsqaure)
    
	   for(int i=0;i<n;i++) {
	       for(j=i+1;j<n;j++) {
	           if(arr[i] + arr[j] == x) {
	               return true;
	           }
	       }
	   }
	   return false;
	    
	    
	//// METHOD 2 - O(n)
    
	    sort(arr, arr+n);
	    int left = 0;
	    int right = n-1;
	    
	    while(left < right) {
	        int xsum = arr[left] + arr[right];
	        
	        if(xsum == x) {
	            return true;
	        }
	        else if(xsum > x) {
	            right--;
	        }
	        else  {
	            left++;
	        }
	    }
	    
	    return false;
	}




