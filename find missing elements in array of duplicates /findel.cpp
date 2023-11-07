

#include <iostream>

using namespace std;

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

int main()
{
    int arr[] = {1,5,4,4,5};
    int n = sizeof(arr) / sizeof(int);
    
    findMissingElementsInArrayofDuplicates(arr,n); // o/p - 2 3 
    
    return 0;
}
