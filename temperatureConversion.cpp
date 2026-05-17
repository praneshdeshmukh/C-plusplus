#include <iostream>
#include <cmath>
#include <vector>


int main() {

    double temp;
    char unit;

    std::cout<<"What unit would you like to convert to? : ";
    std::cin>> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout<<"enter temperature in celsius : \n";
        std::cin>>temp;
        double res = (1.8*temp) + 32.0;
        std::cout<<res;
    }
    else if(unit == 'C' || unit == 'c') {
        std::cout<<"enter temperature in fahrenheit : \n";
        std::cin>>temp;
        double res =  (temp-32.0) / 1.8;
        std::cout<<res;
    }
    else {
        std::cout<<"Please enter a valid temperature unit (F or C)";
    }
    return 0;
}