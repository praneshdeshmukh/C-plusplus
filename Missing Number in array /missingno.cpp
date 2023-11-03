#include<iostream>
#include <vector>
#include <algorithm> // for sort func()
using namespace std;

      int sortAndFindNo(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int counter=0;
        for(int i=0;i<n;i++) {
            if(nums[i] == counter) {
                counter++;
            }
            else {
                return counter;
            }
        }
        return counter;
    }

     int xorr(vector<int>& nums) {

        int ans=0;

        // 1. xor all values of present in array
        for(int i=0;i<nums.size();i++) {
            ans= ans ^ nums[i];
        }
     
        // 2. xor all given range indexes 
        // (including the missing no index)
        // '<=' and not only '<' bcz the given range is inclusive
        //eg [0,3] means -> [0,1,2,3] (0 & 3 included)
     
        for(int i=0; i<=nums.size(); i++) {
            ans = ans ^ i;
        }

        return ans;
    }
    int missingNumber(vector<int>& nums) {
      
     int sum=0;
     int n=nums.size();
     for(int index=0; index<n; index++) {
         sum = sum + nums[index];
     }
     int total = ((n)*(n+1)) / 2;
     int ans = total - sum;

     return ans;
    }

int main() {

    vector<int> nums = {3, 0, 1};
    int res=0;
  // APPROACH 1 -
  // res = sortAndFindNo(nums);

  // APPROACH 2 - using bitwise XOR (optimal)
  res = xorr(nums);
  
  // APPROACH 3 -
  // res = missingNumber(nums);

  cout << "missingNumber is: " << res;
  // Output: 2
}
