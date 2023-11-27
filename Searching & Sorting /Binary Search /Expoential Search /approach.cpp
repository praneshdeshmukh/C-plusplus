// This approach is based on BS approach
// but whem the array size is way big
// suppose array size is infinite
// then it basically creates a shorter subarray
// and then we apply the binary search on the subarray 
// instead of bigger array

// Exponetial search better than binary search in many cases 

#include <iostream>
#include <vector>
using namespace std;

int bs_onSubArray(vector<int>arr, int start, int end, int target) {
    while(start <= end) {
        int mid = start+(end-start)/2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(target > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}
int exponentialSearch(vector<int>arr, int target) {
    int n = arr.size();
    if(arr[0] == target) {
        return 0;
    }
    int i = 1;
    while(i < n && arr[i] <= target) {
        i=i*2;
    }
    return bs_onSubArray(arr, i/2, min(i,n-1),target);
}
int main()
{
    vector<int>arr = {2,6,8,10,12,14,16,18,20,22,23,26,28,100,156,1069};
    int target = 28;
  // how to print a vector : 
    // for (auto element : arr) {
    //     cout << element << " ";
    // }
    int ans = exponentialSearch(arr,target);
    cout << ans <<endl;
    return 0;
}
