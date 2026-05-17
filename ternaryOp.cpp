#include <iostream>
#include <vector>
#include <cmath>

int main() {

    int marks;

    std::cout<<"What's your marks? : ";
    std::cin>>marks;

    marks >=70 ? std::cout<<"First Division" : std::cout<<"Second Divion";
    
    return 0;
}