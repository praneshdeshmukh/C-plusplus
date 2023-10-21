


#include <iostream>

using namespace std;

void shiftNegativeValuesToLeft(int arr[], int size) {
    
    int j =0;
    // j -> ek asa memory block jithe me negative numbers store karu shakto
    for(int index=0; index<size; index++) {
        // index -> Entire array la traverse krnya sathi
            if(arr[index] < 0) {
                 swap(arr[index], arr[j]);
                //  cout<<arr[j]<<" ";
                 j++;
            }
        
    }
    
}
int main()
{
    int arr[] = {10,20,-6,-9,26,-96,1};
    int size = 7;
    shiftNegativeValuesToLeft(arr, size);

    cout<<"Printing the Array : ";
    for(int i=0;i<size;i++) {
        cout<<arr[i] << " ";  // Printing the Array : -6 -9 -96 20 26 10 1
    }

    return 0;
}
