// Input
// arr =
// [10,20,30,90,70,60,50,40]

// Output
// 3

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;

        while(s < e) {
        int mid = s + (e-s) / 2;
            if(arr[mid] < arr[mid+1]) {
                // right me jao
                s = mid + 1;
            }
            else {
                //left me jao bcz 
                // ya toh main b part pe hu or
                // ya toh main peak itself pe hu <-- thats why --> "e=mid" 
                e = mid; 
                // common mistake - e = mid-1;  <-- peak lost ho jayega
            }
        }
        // common mistake - return end; <-- leads to INFINITE LOOP condition
        return s; 
    }
};
