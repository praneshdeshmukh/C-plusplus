// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.
// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]

// -----------------------------------------------------------------------------
#include <iostream>

using namespace std;

void sortColors(int nums[], int size) {
    int left=0;
    int right=size-1;
    int index=0;
    while(index <= right){
        if(nums[index] == 0) {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index] == 2) {
            swap(nums[index] , nums[right]);
            right--;
        }
        else {
            index++;
        }
    }
    for(int i=0; i<size; i++) {
        cout<< nums[i] << " ";   
    }
    cout<<endl;
}
// --------------------------------------------------------
class Solution {

public:
void sortColorsLC(vector<int>& nums) {
        
    // APPROACH 1 - COUNTING
        int n=nums.size();
        int ones=0;
        int twos=0;
        int zeros=0; 

        for(int i=0;i<n;i++) {
            if(nums[i]==0)  {
                zeros++;
            } 
            else if(nums[i] == 2) {
                twos++;
            }
            else {
                ones++;
            }
        }

        int i=0;
        while(zeros--) {
            nums[i]=0;
            i++;
        }
        while(ones--) {
            nums[i]=1;
            i++;
        }
        while(twos--) {
            nums[i]=2;
            i++;
        }
// --------------------------------------------------------
    // APPROACH 2 - TWO POINTER

        // int n = nums.size();
        // int left=0; // first index
        // int right=n-1; //lasr index
        // int index=0;

        //     while(index <= right) { 
        //         // jo prynta maza index [looping variable] 
        //         //right pointer cha agodar belong krto toh pryntach 
        //         // keep moving;
        //         //jsa index,  right ptr cha pudhe nighel STOP.

        //         if(nums[index] == 0) {
        //             swap(nums[index] , nums[left]); 
        //             // left la pathavla 0 i.e red
        //             left++;
        //             index++;
        //         }

        //         else if(nums[index] == 2) {
        //             swap(nums[index] , nums[right]) ;
        //             right--;
        //             // catch - no need of index++
        //             //index++; 
        //         }
                
        //         else {
        //             index++;
        //         }
        //     }


        }
    };
// --------------------------------------------------------
int main()
{
    int nums[] = {2,0,2,1,1,0};
    int size = 6;
    
    sortColors(nums,size);

    return 0;
}
