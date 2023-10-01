
#include <stdio.h>
#include <iostream>
// #include <limits.h> //or
#include <climits>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<< arr[i] << endl;
    }
}

// return true -> if target present else false
bool linarSearch(int lrr[], int target, int size) {
    for(int i=0; i<size; i++) {
        if(lrr[i] == target)
            return true;
     }
    return false;
}

int numberofzeroandone(int nrr[],int size) {
    int countZero = 0;
    int countOne = 0;
    
    for(int i=0; i<size; i++) {
        if(nrr[i] == 0)
            countZero+=1;
        if(nrr[i] == 1)
            countOne+=1;
    }
    cout<<countZero<<endl;
    cout<<countOne<<endl;
}

int minimumNoInArray(int arr[], int size) {
    int minAns = INT_MAX;
    for(int i=0; i<size; i++) {
        if(arr[i] < minAns) //arr[i] < (2^31 - 1) obv YES
            minAns = arr[i]; // if any min num found than previous num then update minAns 
    }
    return minAns;
}


void extremePrintInArray(int ex[], int size){
     int left =0 ;
    int right = size-1;
    
    while(left <= right) {
        // extreme print in an array:
        
        if(left == right) 
        {
            cout << ex[left] << " "; // print once
        }
        else {
            //print both
            cout<<ex[left]<< " ";
            cout<<ex[right] << " ";
        }
        left++;
        right--;
        
    }
   
    
}

void reverseArrays(int rev[], int size) {
    int left =0 ;
    int right = size-1;
    
    while(left <= right) {
        //reverse an array 
        swap(rev[left], rev[right]);
        left++;
        right--;
        
    }
    // print
    for(int i=0;i<size; i++) {
        cout<< rev[i] << " ";
    }
}
int main()
{
    // int arr[10];
    
    // cout<< &arr << endl;
    // cout<< sizeof(arr) << endl; 
    
    // int brr[] = {1,2,3,66,99};
    // int crr[5] = {44, 55};
    // int drr[5] = {33, 22, 1,2,3,66}; //error
    
    
    // n=3 [0 1 2] 
    // int err[3] = {22,33,44};
    // cout << err[2] << endl;
    
    // print :
    
    // int frr[50] = {6,7,8,9,4,5,10,11,12,35};
    // int n=10;
    // for(int i=0; i<n; i++) {
    //     cout<< frr[i] << endl;
    // }
    
    // input array:
    
    // int rrr[5];
    // int n = 5;
    // for(int i=0 ; i<n; i++) {
    //     cin >> rrr[i];
    // }
    // for(int i=0; i<n ; i++) {
    //     cout<<rrr[i] << endl;
    // }
    
    // arr[i] = value at Base address + (dataType * Index)
    // BA - first address of array
    
    //double an array taking input:
    // int arr[3];
    // int n = 3;
    // for(int i=0;i<n ; i++) {
    //     cin >> arr[i];
    // }
    // for(int i=0;i<n; i++) {
    //     // arr[i] = arr[i] * 2; //or
    //     arr[i] = arr[i] + arr[i];
    //     cout<<arr[i]<<endl;
    // }
    
    // print total sum:
    // int arr[3];
    // int n = 3,sum=0;
    // for(int i=0;i<n ; i++) {
    //     cin >> arr[i];
    // }
    // for(int i=0;i<n; i++) {
    //     sum = sum + arr[i];
    // }
    //     cout<<sum<<endl;
    
    // Linear Search using flag concept:  
    // int inputarr[5] = {2,4,6,8,1};
    // int target = 10;
    // int n=5;
    // bool flag=0; //inital value false
    
    // for(int i=0; i<n; i++) {
    //     if(inputarr[i] == target) {
    //         flag = 1;
    //         break;
    //     }   
        
    // }
    // if(flag == 1)
    //     cout<< "Target found" << endl;
    // else 
    //     cout<<"Not found" << endl;
    
    // Arrays and function:
    
    // int zzz[5] = {2,6,7,9,8};
    // int size = 5;
    // printArray(zzz , size);
    
    // linarSearch using function
    // int lrr[5] = {1,2,3,4,8};
    // int target = 8;
    // int size = 5;
    // bool statusReturned;
    // statusReturned = linarSearch(lrr, target, size);
    // if(statusReturned) 
    //     cout<<"Target found"<<endl;
    // else
    //     cout<<"Not found"<<endl;

    // count 0 & 1 in array
    // int arr[] = {0,0,1,0,1,0,1,0,0,1,1,1,1,0};
    // // 0 - 7
    // // 1 - 7
    // int size=14;
    // numberofzeroandone(arr,size);
        
    // min no in an array
    // cout<<INT_MIN<<endl; //-2^31
    // cout<<INT_MAX<<endl; //2^31 - 1
    // int min[6] = {2,3,6,9,5,6};
    // int size = 6;
    // int res = minimumNoInArray(min,size);
    // cout<<res<<endl;
    
    // Reverse an array
    // int rev[6] = {10,20,30,40,50,60};
    // int size = 6;
    // reverseArrays(rev,size);
    
    // Extreme print in an array:
    // int ex[5] = {10,20,30,40,50};
    // int size = 5;
    // extremePrintInArray(ex, size);
    
    return 0;
}
