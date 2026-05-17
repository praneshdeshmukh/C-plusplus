#include <iostream>
#include <cmath>
#include <vector> 


int main() {

    int rows;
    int columns;
    char symbol;

    std::cout<<"Enter number of rows : ";
    std::cin>>rows;

    std::cout <<"Enter number of columns : ";
    std::cin>>columns;

    std::cout<<"Enter element of the matrix : ";
    std::cin>>symbol;

    for(int i=0; i<rows;i++) {
        for(int j=0; j<columns; j++) {
            std::cout<<symbol;
        }
        std::cout<<'\n';
    }

    return 0;
}