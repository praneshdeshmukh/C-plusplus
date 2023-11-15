
#include <iostream>
using namespace std;

int BinarySearch(int arr[],int target ,int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    
    while(start <= end) {
        if(arr[mid] == target) {
            return mid;
        }
        else if(target > arr[mid]) {
            start  = mid + 1;
        }
        else if(target < arr[mid]) {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int findFirstOccurence(int arr[] , int target, int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while(start<=end) {
        if(arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) { 
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int findLastOccurence(int arr[], int target, int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while(start<=end) {
        if(arr[mid] == target) {
            ans = mid;
            start = mid + 1; // right me jao
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) { 
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int findTotalOccurence(int arr[], int target, int size) {
    int start = 0;
    int end = size - 1;
    int mid = start - end / 2;
    
    int TotalOccurences = findLastOccurence(arr , target , size) - findFirstOccurence(arr , target , size) + 1;
    return TotalOccurences;
}
int main()
{
    // BINARY SEARCH
    
    int brr[] = {10,20,30,40,50,60,70,80};
    int n = 8;
    int targetEle = 60;
    int ans = BinarySearch(brr, targetEle, n);
    if (ans != -1)
    cout << "The target element was: " << brr[ans] << " found at index: "<< ans << endl;
    
    
    int arr[] = {10,20,50,50,50,60,70,80};
    int target = 50;
    int size = 8;
    
    // FIND FIRST OCCURENCE OF AN ELEMENT IN ARRAY
    
    int res = findFirstOccurence(arr, target, size); // 2
    cout << "First occurence of target element: " << arr[res] << " is at: "<< res << endl;
    
    // FIND LAST OCCURENCE OF AN ELEMENT IN ARRAY
    
    int res2 = findLastOccurence(arr, target, size); // 4
    cout << "Last occurence of target element: " << arr[res2] << " is at: "<< res2 << endl;
   
    // FIND TOTAL OCCURENCE OF AN ELEMENT IN ARRAY   
   
    int res3 = findTotalOccurence(arr, target, size); // 3 times
    cout << "Total no of times target element: " << arr[res3] << " occured are: "<< res3 << endl;
   
   
   
    // for(int  i=0; i<size ; i++) {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
