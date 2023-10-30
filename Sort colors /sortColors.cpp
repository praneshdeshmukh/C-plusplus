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
int main()
{
    int nums[] = {2,0,2,1,1,0};
    int size = 6;
    
    sortColors(nums,size);

    return 0;
}
