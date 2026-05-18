#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

int main() {

    char *pGrades = nullptr;
    int size;
    std::cout<< "How many grades to enter? ";
    std::cin>>size;
    pGrades = new char[size];

    for(int i=0; i<size; i++) {
        char temp;
        std::cout<<"Enter grade #"<<i+1<<" ";
        std::cin>>temp;
        temp = toupper(temp);
        pGrades[i] = temp;

    }

    for(int i=0; i<size;i++) {
        std::cout<< pGrades[i]<<" ";
    }

    delete[] pGrades;

    return 0;


}