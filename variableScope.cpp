#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

void print();
int myNum = 3;
int main() {
    int myNum = 1;
    print();
    std::cout<<myNum<<'\n';
    return 0;   
}

void print() {
int myNum = 2;
    std::cout<<  ::myNum  <<'\n'; // preecing with :: ,helps to refer to global variable and not local
}