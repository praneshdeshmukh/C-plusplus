#include <iostream>

using namespace std;

// METHOD 1 : SORTING + SWAPPING APPROACH
void findMissingElementsInArrayofDuplicates(int *arr, int n) {
    
    int i=0;
    while(i<n) {
        int index = arr[i] - 1;
        
        if(arr[i] != arr[index]) {
            swap(arr[i], arr[index]);
        }
        
        else {
            i++;
        }
    }
    //printing array which is now sorted
    // for(int k=0; k<n; k++) {
    //     cout<< arr[k] << " ";
    // }
    // cout<<endl;
    
    for(int i=0; i<n; i++) {
        if(arr[i] != i+1) { //then it is the extra element that is not supposed to be on that index
            
            cout<< i+1 << " ";    
        }
    }
    cout<<endl;
}

// METHOD 2 : NEGATIVE MARKING APPROACH
void usingNegativeMarkApproach(int *arr, int n) {
    for(int i=0; i<n; i++) {
        int index= abs(arr[i]);
        
        // if not visited yet mark it visited(i.e make it -ve)
        if(arr[index - 1] > 0) {
            arr[index - 1] = arr[index - 1] * -1;
        }
    }
        // printing array uptil now
        // for(int k=0; k<n; k++) {
        //     cout<< arr[k] << " ";
        // }
        // cout<<endl;
        
        // iterate through arr again and check if there is any unvisited index
        // i.e is ther any +ve index 
        for(int i=0; i<n; i++) {
            if(arr[i] > 0) {
                cout<< i+1 << " ";
            }
        }
        cout << endl;
}
int main()
{
    int arr[] = {1,5,4,4,5};
    int n = sizeof(arr) / sizeof(int);
    
    findMissingElementsInArrayofDuplicates(arr , n); // o/p : 2 3 
    //usingNegativeMarkApproach(arr , n) // o/p : 2 3
    
    return 0;
}
