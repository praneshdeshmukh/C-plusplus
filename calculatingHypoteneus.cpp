#include <iostream>
#include <vector>
#include <cmath>


int main() {
    double base;
    double perpendicular;
    double hypoteneus;

    std::cout<<"What's base of the triangle? : ";
    std::cin>>base;

    std::cout<<"What's the perpendicular of the triangle> : ";
    std::cin>>perpendicular;

    hypoteneus = sqrt(pow(base, 2) + pow(perpendicular, 2));

    std::cout<<"Hypoteneus of triangle is : "<<hypoteneus<<'\n';
    return 0;

}