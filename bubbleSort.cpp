#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
void bubbleSortIncOrder(int array[], int size);
void bubbleSortDecOrder(int array[], int size);

int main() {

    int array[] = {10,2,3,4,9,8,1,5,7,6};
    int size = sizeof(array)/sizeof(array[0]);

    bubbleSortIncOrder(array, size);
    
    for(int element : array) {
        std::cout<<element <<" ";
    }
    std::cout<<'\n';
    
    bubbleSortDecOrder(array, size);
    for(int element : array) {
        std::cout<<element <<" ";
    }
    
    return 0;
}

void bubbleSortIncOrder(int array[], int size) {
    int temp;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(array[j]>array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
}
void bubbleSortDecOrder(int array[], int size) {
    int temp;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(array[j]<array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
}