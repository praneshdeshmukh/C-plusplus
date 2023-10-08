

#include <iostream>

using namespace std;

void sortZerosAndOnes(int arr[], int size) {
    
    // APPROACH 1

    int zeroCount = 0;
    int oneCount  = 0;
    
    //stepA: Count 0 and 1
      
    for(int i=0; i<size ; i++) {
        if(arr[i] == 0)
            zeroCount++;
        if(arr[i] == 1) 
            oneCount++;
    }
    //// cout << zeroCount << "  " << oneCount << endl; 
    
    
    //Step B: place all zeroes first

    int i;
    for(i = 0; i<zeroCount; i++) {
        arr[i] = 0;
    }
    
    for(int j=i ; j<size ; j++) {
        arr[j] = 1;
    }

    // APPROACH 2 [EASY]
  
    // int index=0;
    // while(zeroCount--) {  // zeroCount=0 => false => end
    //     arr[index] = 0;
    //     index++;
    // }
    // while(oneCount--) {
    //     arr[index] = 1;
    //     index++;
    // }
    
}

void shiftArrayElementBy1(int arr[] , int size) {
      
    // LEFT SHIFT
    
    ////Step 1
    int temp=arr[size-1] ;
    
    //step2 shift -> arr[i] = arr[i-1]
    for(int i=size-1; i>=1 ; i--) {
        arr[i] = arr[i-1];
    }
    
    
    ////step3 copy temp into 0th indecx
    // arr[0] = temp;
    
    
    // RIGHT SHIFT
    
    // int temp=arr[0];
    
    // for(int i=0; i<size ; i++){
    //     arr[i] = arr[i+1]; 
    // }
    
    // arr[size-1] = temp;
}

void shiftArrayElementBy2(int arr[] , int n) {
  
    // Step 1
    int temp[] = {arr[n-1] , arr[n-2]};
    // cout<<temp[0] << " " << arr[1] << endl;
    
    // Step 2
    
    for(int i=n-1; i>=2; i--) {
        arr[i] = arr[i-2];
    }
    
    // Step 3
    
    arr[0] = temp[1];
    arr[1] = temp[0]; 
    
    
}

int getUnique(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = ans^arr[i];
     }
    return ans;
}


int main()
{
    // int arr[] = {10,20,30};
    // int n=3;
    
    // PRINT PAIRS
    // for(int i=0 ; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout <<  arr[i] << " : " << arr[j] << endl;
    //     }
    // }
    
    // PRINT TRIPLETS
    // for(int i=0 ; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         for(int k=0; k<n ; k++) {
    //             cout <<  arr[i] << " : " << arr[j] << " : " << arr[k] << endl;
    //         } 
    //     }
    // }
    
    // -------------------------------------------------
    
    // Sort 0's and 1's
    
    // int brr[] = {0,0,1,1,0,1,0,1,0,0,1,1,0};  // =>  0 0 0 0 0 0 0 1 1 1 1 1 1
    
    // int n = 13;
    
    // sortZerosAndOnes(brr, n);
    
    //  for(int i=0; i<n; i++) {
    //     cout<< brr[i] << " ";
    // }

    // -------------------------------------------------
    
    // SHIFT ARRAY ELEMENT BY 1
    
    int crr[] = {10,20,30,40,50,60,70,80,90,100}; // => 100 10 20 30 40 50 60 70 80 90
    int size = 10;
    // shiftArrayElementBy1(crr, size);
    
    
    // SHIFT ARRAY ELEMENT BY 2
    
    shiftArrayElementBy2(crr,size);
    
    for(int i=0; i<size; i++) {
        cout<< crr[i] << " ";
    }
    
    // --------------------------------------------------
    
    // GET UNIQUE ELEMENT
    
    // int arr[] = {2,10,11,10,2,13,15,13,15};
    // int n = 9;

    // int finalAns = getUnique(arr, n) ;
    // cout << "Final answer is: " << finalAns << endl;
    
    
    return 0;
}
